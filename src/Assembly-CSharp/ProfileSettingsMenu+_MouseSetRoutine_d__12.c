
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ProfileSettingsMenu+<MouseSetRoutine>d__12::
     ProfileSettingsMenu_MouseSetRoutine_d_12_MoveNext
               (ProfileSettingsMenu_MouseSetRoutine_d_12 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
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
      fVar5 = (float)(*(pSVar4->klass->vtable).get_value.methodPtr)
                                (pSVar4,(pSVar4->klass->vtable).get_value.method);
      pSVar3 = (pPVar2->fields).mouseSensitivitySlider;
      if (pSVar3 != (SettingsSlider *)0x0) {
        afStackX_8[0] = (float)FUN_?(fVar5 / (pSVar3->fields).interval);
        pSVar3 = (pPVar2->fields).mouseSensitivitySlider;
        if (pSVar3 != (SettingsSlider *)0x0) {
          afStackX_8[0] = afStackX_8[0] * (pSVar3->fields).interval;
          fVar5 = _UNK_?;
          if ((afStackX_8[0] < _UNK_?) ||
             (fVar5 = _UNK_?, _UNK_? < afStackX_8[0])) {
            afStackX_8[0] = fVar5;
          }
          pOVar6 = (Object *)FUN_?(uRam_?,afStackX_8);
          if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                       field_0x1c == 0) {
            FUN_?();
          }
          Assets::Scripts::ProfileSettings::ProfileSettingsManager::
          ProfileSettingsManager_SetSettingValue
                    (ProfileSettingKey__Enum_MouseSensitivity,pOVar6,(MethodInfo *)0x0);
          bVar7 = iRam_? == 0;
          (pPVar2->fields).mouseSenseSetRoutine = (IEnumerator *)0x0;
          if (bVar7) {
            return 0;
          }
          uVar8 = (uint)((ulonglong)&(pPVar2->fields).mouseSenseSetRoutine >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
          return 0;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  (this->fields).__1__state = -1;
  pOVar6 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
  bVar7 = iRam_? != 0;
  *(undefined4 *)&pOVar6[1].klass = 0x3f800000;
  (this->fields).__2__current = pOVar6;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
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
  uVar1 = func_?(&
                              MethodInfo__ProfileSettingsMenu___MouseSetRoutine_d__12__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

