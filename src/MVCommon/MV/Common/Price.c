
/* Price(Int32[]) */

void MVCommon.dll::MV::Common::Price::Price__ctor
               (Price *this,Int32__Array *price,MethodInfo *method)

{
  if (price == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)price->max_length != 0) {
    this->gold = price->vector[0];
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

