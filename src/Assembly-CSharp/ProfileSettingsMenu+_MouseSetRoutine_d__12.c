
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ProfileSettingsMenu+<MouseSetRoutine>d__12::
     ProfileSettingsMenu_MouseSetRoutine_d_12_MoveNext
               (ProfileSettingsMenu_MouseSetRoutine_d_12 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (((pPVar2 != (ProfileSettingsMenu *)0x0) &&
        (pSVar3 = (pPVar2->fields).mouseSensitivitySlider, pSVar3 != (SettingsSlider *)0x0)) &&
       (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
      fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                                  (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
      pSVar3 = (pPVar2->fields).mouseSensitivitySlider;
      if (pSVar3 != (SettingsSlider *)0x0) {
        fVar5 = (float10)func_?((float)fVar5 / (pSVar3->fields).interval);
        pSVar3 = (pPVar2->fields).mouseSensitivitySlider;
        if (pSVar3 != (SettingsSlider *)0x0) {
          fStack_6 = (pSVar3->fields).interval * (float)fVar5;
          fVar7 = _UNK_?;
          if ((fStack_6 < _UNK_?) || (fVar7 = _UNK_?, _UNK_? < fStack_6)) {
            fStack_6 = fVar7;
          }
          value = (Object *)func_?(TypeInfo__System__Single,&fStack_6);
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          Assets::Scripts::ProfileSettings::ProfileSettingsManager::
          ProfileSettingsManager_SetSettingValue
                    (ProfileSettingKey__Enum_MouseSensitivity,value,(MethodInfo *)0x0);
          ppIVar8 = &(pPVar2->fields).mouseSenseSetRoutine;
          *ppIVar8 = (IEnumerator *)0x0;
          func_?(ppIVar8,0);
          return 0;
        }
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    bVar10 = (*pcVar9)();
    return bVar10;
  }
  (this->fields).__1__state = -1;
  this_00 = (SubscribableVariable_1_System_Single_ *)
            func_?(TypeInfo__UnityEngine__WaitForSeconds);
  SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
            (this_00,1.0,(MethodInfo *)0x0);
  ppOVar11 = &(this->fields).__2__current;
  *ppOVar11 = (Object *)this_00;
  func_?(ppOVar11,this_00);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ProfileSettingsMenu+<MouseSetRoutine>d__12::
     ProfileSettingsMenu_MouseSetRoutine_d_12_System_Collections_IEnumerator_Reset
               (ProfileSettingsMenu_MouseSetRoutine_d_12 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__ProfileSettingsMenu___MouseSetRoutine_d__12__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

