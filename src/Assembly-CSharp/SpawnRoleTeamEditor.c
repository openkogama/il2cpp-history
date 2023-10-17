
/* Void Initialize(MVTeam, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
               (SpawnRoleTeamEditor *this,MVTeam__Enum spawnRolesTeam,
               UnityAction_1_MV_WorldObject_MVTeam_ *onTeamChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).onTeamChangeCallback = onTeamChangeCallback;
  func_?(&(this->fields).onTeamChangeCallback,onTeamChangeCallback);
  pLVar1 = (this->fields).teamButtons;
  index = 0;
  if (pLVar1 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) break;
      this_00 = (pMVar3->fields).teamNames;
      pLVar1 = (this->fields).teamButtons;
      if ((pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) ||
         (pSVar4 = mscorlib.dll::System::Collections::Generic::
                   List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
                   List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                             (&SStack_5,pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                             ), this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
         ) break;
      pTVar6 = (Text *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                  pSVar4->team,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                 );
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      pTVar7 = pSVar4->buttonSelectedText;
      SStack_5.team = pSVar4->team;
      if (pTVar7 == (Text *)0x0) break;
      SStack_5.buttonNotSelectedText = (Text *)(pTVar7->klass->vtable).set_text.method;
      SStack_5.buttonSelected = (GameObject *)&UNK_?;
      SStack_5.buttonNotSelected = (GameObject *)pTVar7;
      SStack_5.buttonSelectedText = pTVar6;
      (*(pTVar7->klass->vtable).set_text.methodPtr)();
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      pTVar7 = pSVar4->buttonNotSelectedText;
      SStack_5.team = pSVar4->team;
      if (pTVar7 == (Text *)0x0) break;
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,pTVar6,(pTVar7->klass->vtable).set_text.method);
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = spawnRolesTeam == pSVar4->team;
      SStack_5.buttonSelected = pSVar4->buttonSelected;
      SStack_5.buttonNotSelected = pSVar4->buttonNotSelected;
      SStack_5.buttonSelectedText = pSVar4->buttonSelectedText;
      SStack_5.buttonNotSelectedText = pSVar4->buttonNotSelectedText;
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      SStack_5.team = pSVar4->team;
      if (pSVar4->buttonSelected == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar4->buttonSelected,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      SStack_5.team = pSVar4->team;
      if (pSVar4->buttonNotSelected == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar4->buttonNotSelected,!value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      index = index + 1;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SelectBlueTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectBlueTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Blue,(MethodInfo *)0x0);
  return;
}


/* Void SelectGreenTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectGreenTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Green,(MethodInfo *)0x0);
  return;
}


/* Void SelectRedTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectRedTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Red,(MethodInfo *)0x0);
  return;
}


/* Void SelectTeam(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectTeam
               (SpawnRoleTeamEditor *this,MVTeam__Enum teamSelected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,teamSelected,(pUVar1->fields)._._.method);
    index = 0;
    pLVar2 = (this->fields).teamButtons;
    while (pLVar2 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar2 = (this->fields).teamButtons;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffe8,pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = teamSelected == pSVar3->team;
      pLVar2 = (this->fields).teamButtons;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if (pSVar3->buttonSelected == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar3->buttonSelected,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).teamButtons;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if (pSVar3->buttonNotSelected == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar3->buttonNotSelected,!value,(MethodInfo *)0x0);
      index = index + 1;
      pLVar2 = (this->fields).teamButtons;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SelectYellowTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectYellowTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Yellow,(MethodInfo *)0x0);
  return;
}

