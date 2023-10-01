from requests_html import HTMLSession
#from urllib.request import urlopen

#Waiting for valid library

'''
#url = "https://www.sofascore.com/it/torneo/calcio/italy/serie-a/23#52760"
html = urlopen(url).read()
soup = BeautifulSoup(html, features="html.parser")

for script in soup(["script","style"]):
    script.extract()

text = soup.get_text()
lines = (line.strip() for line in text.splitlines())
chunks = (phrase.strip() for line in lines for phrase in line.split("  "))
#text = '\n'.join(chunk for chunk in chunks if chunk)
'''
url = 'html.firefox.firefox118 body.home.page-template-default.page.page-id-111.fl-builder.fl-theme-builder-singular.fl-framework-base.fl-preset-default.fl-full-width.fl-search-active.fl-builder-breakpoint-default div.fl-page div.fl-page-content div.fl-content-full.container div.row div.fl-content.col-md-12 article#fl-post-111.fl-post.post-111.page.type-page.status-publish.hentry div.fl-post-content.clearfix div.fl-builder-content.fl-builder-content-111.fl-builder-content-primary.fl-builder-global-templates-locked div.fl-row.fl-row-fixed-width.fl-row-bg-none.fl-node-5db9cbe851c41 div.fl-row-content-wrap div.fl-row-content.fl-row-fixed-width.fl-node-content div.fl-col-group.fl-node-5db9cbe877a43 div.fl-col.fl-node-5db9cbe877d22 div.fl-col-content.fl-node-content div.fl-module.fl-module-wipa-static-html.fl-node-5db9cbe8507b2 div.fl-module-content.fl-node-content div.ip-detail.minified div.left div.ip-address-list p.ip-address span#ipv4.address a'
session = HTMLSession()
proxy = '145.239.85.58:9300'
#r = session.get(url)
r = session.get('', proxies={'http': proxy,'https': proxy})
sel = 'html body.post-template-default.single.single-post.postid-324621.single-format-standard.wp-embed-responsive.herald-boxed.herald-v_2_6.aa-prefix-saler- div#content.herald-site-content.herald-slide div.herald-section.container article#post-324621.herald-single.post-324621.post.type-post.status-publish.format-standard.has-post-thumbnail.hentry.category-salerno.category-testata div.row div.col-lg-9.col-md-9.col-mod-single.col-mod-main header.entry-header h1.entry-title.h1'
print(r.html.find(sel, first=True).text)