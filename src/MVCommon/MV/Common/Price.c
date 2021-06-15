
/* Price(Int32[]) */

void MVCommon.dll::MV::Common::Price::Price__ctor
               (Price *this,Int32__Array *price,MethodInfo *method)

{
  if (price == (Int32__Array *)0x0) {
    func_?(0);
  }
  else if (price->max_length != 0) {
    this[2].gold = price->vector[0];
    return;
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

