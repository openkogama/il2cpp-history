
/* Void Dispose() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
     WinningConditionDebriefing_WaitForFadeOut_c_Iterator1_Dispose
               (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
     WinningConditionDebriefing_WaitForFadeOut_c_Iterator1_MoveNext
               (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar2,(MethodInfo *)0x0),
     this_01 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x2) {
code_?:
      (this->fields)._PC = -1;
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_02 = (KogamaSettingNumericBase_1_System_Single_ *)
                  InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                            ((InventoryItemPreviewer *)pMVar2,(MethodInfo *)0x0),
       this_02 != (KogamaSettingNumericBase_1_System_Single_ *)0x0)) {
      pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_02,(MethodInfo *)0x0);
      if ((int)pIVar4 < 0xbb9) goto code_?;
      pWVar5 = (this->fields)._this;
      if (pWVar5 != (WinningConditionDebriefing *)0x0) {
        this_00 = (pWVar5->fields).debriefing;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (this_03 = (MVNetworkGameStateListener *)
                      InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                ((InventoryItemPreviewer *)pMVar2,(MethodInfo *)0x0),
           this_03 != (MVNetworkGameStateListener *)0x0)) {
          MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                    (this_03,(MethodInfo *)0x0);
          time = (String *)func_?();
          if (this_00 != (DebriefingWinnerGUI *)0x0) {
            DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText(this_00,time,(MethodInfo *)0x0);
            pOVar3 = (Object *)func_?();
            (this->fields)._current = pOVar3;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
     WinningConditionDebriefing_WaitForFadeOut_c_Iterator1_Reset
               (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
     WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
               (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *this,MethodInfo *method)

{
  return;
}

