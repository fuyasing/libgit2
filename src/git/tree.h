#ifndef INCLUDE_git_tree_h__
#define INCLUDE_git_tree_h__

#include "common.h"
#include "oid.h"
#include "repository.h"

/**
 * @file git/tree.h
 * @brief Git tree parsing, loading routines
 * @defgroup git_tree Git tree parsing, loading routines
 * @ingroup Git
 * @{
 */
GIT_BEGIN_DECL

/** Representation of a tree object. */
typedef struct git_tree git_tree;

/**
 * Lookup a tree object from the repository.
 * The generated tree object is owned by the revision
 * repo and shall not be freed by the user.
 *
 * @param repo the repo to use when locating the tree.
 * @param id identity of the tree to locate.
 * @return the tree; NULL if the tree could not be created
 */
GIT_EXTERN(git_tree *) git_tree_lookup(git_repository *repo, const git_oid *id);

/**
 * Get the id of a tree.
 * @param tree a previously loaded tree.
 * @return object identity for the tree.
 */
GIT_EXTERN(const git_oid *) git_tree_id(git_tree *tree);

/** @} */
GIT_END_DECL
#endif