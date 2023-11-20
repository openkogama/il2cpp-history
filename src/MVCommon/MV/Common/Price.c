
/* Price(Int32[]) */

void MVCommon.dll::MV::Common::Price::Price__ctor
               (Price *this,Int32__Array *price,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (price == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (price->max_length != 0) {
    this->gold = price->vector[0];
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_5 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

