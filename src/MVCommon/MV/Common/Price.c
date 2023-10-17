
/* Int32[] ToArray() */

Int32__Array * MVCommon.dll::MV::Common::Price::Price_ToArray(Price *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  ppIStack_1 = (Int32__Array__Class **)0x1;
  pIStack_2 = TypeInfo__System__Int32;
  pIVar3 = (Int32__Array *)func_?();
  if (pIVar3 != (Int32__Array *)0x0) {
    if (pIVar3->max_length != 0) {
      pIVar3->vector[0] = this->gold;
      return pIVar3;
    }
    ppIStack_1 = (Int32__Array__Class **)0x0;
    pIStack_2 = (Int32__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pIVar3 = (Int32__Array *)(*pcVar4)();
    return pIVar3;
  }
  ppIStack_1 = (Int32__Array__Class **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  pIVar3 = (Int32__Array *)(*pcVar4)();
  return pIVar3;
}


/* Price(Int32[]) */

void MVCommon.dll::MV::Common::Price::Price__ctor_1
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

