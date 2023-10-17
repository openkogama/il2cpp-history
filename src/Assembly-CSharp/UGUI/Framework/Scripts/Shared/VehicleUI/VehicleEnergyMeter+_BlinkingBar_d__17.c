
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<BlinkingBar>d__17::VehicleEnergyMeter_BlinkingBar_d_17_MoveNext
               (VehicleEnergyMeter_BlinkingBar_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pVVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if ((pVVar2 != (VehicleEnergyMeter *)0x0) &&
         (pIVar3 = (pVVar2->fields).progressBarImage, pIVar3 != (Image *)0x0)) {
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,(pVVar2->fields).originalColor.r,(pVVar2->fields).originalColor.g,
                   (pVVar2->fields).originalColor.b,(pVVar2->fields).originalColor.a,
                   (pIVar3->klass->vtable).set_color.method);
        pSVar4 = (SubscribableVariableBase_1_System_Single_ *)
                 func_?(TypeInfo__UnityEngine__WaitForSeconds);
        if (pSVar4 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
          SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single___ctor(pSVar4,0.3,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)pSVar4;
          func_?(&(this->fields).__2__current,pSVar4);
          (this->fields).__1__state = 2;
          return 1;
        }
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
    pRVar5 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
             Nullable_1_UnityEngine_Rect__get_Value
                       (&RStack_6,(Nullable_1_UnityEngine_Rect_ *)&(pVVar2->fields).currentColor,
                        MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    if (pIVar3 != (Image *)0x0) {
      RStack_6.m_XMin = (float)(pIVar3->klass->vtable).set_color.method;
      (*(pIVar3->klass->vtable).set_color.methodPtr)
                (pIVar3,pRVar5->m_XMin,pRVar5->m_YMin,pRVar5->m_Width,pRVar5->m_Height);
      pSVar4 = (SubscribableVariableBase_1_System_Single_ *)
               func_?(TypeInfo__UnityEngine__WaitForSeconds);
      if (pSVar4 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
        SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
                  (pSVar4,0.3,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)pSVar4;
        func_?(&(this->fields).__2__current,pSVar4);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::
     VehicleEnergyMeter+<BlinkingBar>d__17::
     VehicleEnergyMeter_BlinkingBar_d_17_System_Collections_IEnumerator_Reset
               (VehicleEnergyMeter_BlinkingBar_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

