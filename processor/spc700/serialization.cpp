auto SPC700::serialize(serializer& s) -> void {
  s.integer(regs.pc);
  s.integer(regs.a);
  s.integer(regs.x);
  s.integer(regs.y);
  s.integer(regs.s);
  s.integer(regs.p.data);

  s.integer(opcode);
  s.integer(dp.w);
  s.integer(sp.w);
  s.integer(rd.w);
  s.integer(wr.w);
  s.integer(bit.w);
  s.integer(ya.w);
}
