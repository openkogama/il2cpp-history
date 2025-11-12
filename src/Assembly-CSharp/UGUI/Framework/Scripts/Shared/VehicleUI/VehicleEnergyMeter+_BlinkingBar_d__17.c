
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<BlinkingBar>d__17::VehicleEnergyMeter_BlinkingBar_d_17_MoveNext
               (VehicleEnergyMeter_BlinkingBar_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    LOCK();
    UNLOCK();
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
      if ((pVVar2 != (VehicleEnergyMeter *)0x0) &&
         (pIVar3 = (pVVar2->fields).progressBarImage, pIVar3 != (Image *)0x0)) {
        fStack_4 = (pVVar2->fields).originalColor.r;
        fStack_5 = (pVVar2->fields).originalColor.g;
        fStack_6 = (pVVar2->fields).originalColor.b;
        fStack_7 = (pVVar2->fields).originalColor.a;
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,&fStack_4,(pIVar3->klass->vtable).set_color.method);
        pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
        bVar9 = iRam_? != 0;
        *(undefined4 *)&pOVar8[1].klass = 0x3e99999a;
        (this->fields).__2__current = pOVar8;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        (this->fields).__1__state = 2;
        return 1;
      }
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
  }
  (this->fields).__1__state = -1;
  if (pVVar2 != (VehicleEnergyMeter *)0x0) {
    if (((pVVar2->fields).updateEnergy == 0) || ((pVVar2->fields).currentColor.hasValue == 0)) {
      return 0;
    }
    pIVar3 = (pVVar2->fields).progressBarImage;
    if (pIVar3 != (Image *)0x0) {
      fStack_4 = (pVVar2->fields).currentColor.value.r;
      fStack_5 = (pVVar2->fields).currentColor.value.g;
      fStack_6 = (pVVar2->fields).currentColor.value.b;
      fStack_7 = (pVVar2->fields).currentColor.value.a;
      (*(pIVar3->klass->vtable).set_color.methodPtr)
                (pIVar3,&fStack_4,(pIVar3->klass->vtable).set_color.method);
      pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      *(undefined4 *)&pOVar8[1].klass = 0x3e99999a;
      (this->fields).__2__current = pOVar8;
      func_?(&(this->fields).__2__current);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<BlinkingBar>d__17::
     VehicleEnergyMeter_BlinkingBar_d_17_System_Collections_IEnumerator_Reset
               (VehicleEnergyMeter_BlinkingBar_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

