
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<StopBlinking>d__14::VehicleEnergyMeter_StopBlinking_d_14_MoveNext
               (VehicleEnergyMeter_StopBlinking_d_14 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pVVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (pVVar2 == (VehicleEnergyMeter *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      (pVVar2->fields).currentColor.hasValue = 0;
      *(undefined3 *)&(pVVar2->fields).currentColor.field_0x1 = 0;
      (pVVar2->fields).currentColor.value.r = 0.0;
      (pVVar2->fields).currentColor.value.g = 0.0;
      (pVVar2->fields).currentColor.value.b = 0.0;
      (pVVar2->fields).currentColor.value.a = 0.0;
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  pOVar5 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
  bVar6 = iRam_? != 0;
  *(undefined4 *)&pOVar5[1].klass = 0x40400000;
  (this->fields).__2__current = pOVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<StopBlinking>d__14::
     VehicleEnergyMeter_StopBlinking_d_14_System_Collections_IEnumerator_Reset
               (VehicleEnergyMeter_StopBlinking_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___StopBlinking_d__14__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

