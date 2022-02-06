/* -*- c++ -*- */
/*
 * Copyright 2022 gr-lora author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_LORA_LORA_DECODE2_H
#define INCLUDED_LORA_LORA_DECODE2_H

#include <gnuradio/block.h>
#include <lora/api.h>

namespace gr {
namespace lora {

/*!
 * \brief <+description of block+>
 * \ingroup lora
 *
 */
class LORA_API lora_decode2 : virtual public gr::block {
public:
  typedef std::shared_ptr<lora_decode2> sptr;

  /*!
   * \brief Return a shared_ptr to a new instance of lora::lora_decode2.
   *
   * To avoid accidental use of raw pointers, lora::lora_decode2's
   * constructor is in a private implementation
   * class. lora::lora_decode2::make is the public interface for
   * creating new instances.
   */
  static sptr make();
};

} // namespace lora
} // namespace gr

#endif /* INCLUDED_LORA_LORA_DECODE2_H */
