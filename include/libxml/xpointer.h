/**
 * @file
 * 
 * @brief API to handle XML Pointers
 * 
 * API to handle XML Pointers
 * Base implementation was made accordingly to
 * W3C Candidate Recommendation 7 June 2000
 * http://www.w3.org/TR/2000/CR-xptr-20000607
 *
 * Added support for the element() scheme described in:
 * W3C Proposed Recommendation 13 November 2002
 * http://www.w3.org/TR/2002/PR-xptr-element-20021113/
 *
 * @copyright See Copyright for the status of this software.
 *
 * @author Daniel Veillard
 */

#ifndef __XML_XPTR_H__
#define __XML_XPTR_H__

#include <libxml/xmlversion.h>

#ifdef LIBXML_XPTR_ENABLED

#include <libxml/tree.h>
#include <libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Functions.
 */
XML_DEPRECATED
XMLPUBFUN xmlXPathContext *
		    xmlXPtrNewContext		(xmlDoc *doc,
						 xmlNode *here,
						 xmlNode *origin);
XMLPUBFUN xmlXPathObject *
		    xmlXPtrEval			(const xmlChar *str,
						 xmlXPathContext *ctx);

#ifdef __cplusplus
}
#endif

#endif /* LIBXML_XPTR_ENABLED */
#endif /* __XML_XPTR_H__ */
