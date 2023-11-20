
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
         (pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                             (&MStack_5,
                              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                               *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                             ), this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
         ) break;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                          *(Int32Enum__Enum *)&pMVar4->visible,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                         );
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      pSVar7 = (String *)pMVar4->actualWidth;
      MStack_5.visible = pMVar4->visible;
      MStack_5._17_3_ = *(undefined3 *)&pMVar4->field_0x11;
      if (pSVar7 == (String *)0x0) break;
      MStack_5.width = (float)pSVar7->klass[1].vtable.System_IConvertible_ToType.method;
      MStack_5.index = (int32_t)&UNK_?;
      MStack_5.name = pSVar7;
      MStack_5.actualWidth = (float)pOVar6;
      (*pSVar7->klass[1].vtable.System_IConvertible_ToType.methodPtr)();
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      piVar8 = (int *)pMVar4->width;
      MStack_5.visible = pMVar4->visible;
      MStack_5._17_3_ = *(undefined3 *)&pMVar4->field_0x11;
      if (piVar8 == (int *)0x0) break;
      (**(code **)(*piVar8 + 0x318))(piVar8,pOVar6,*(undefined4 *)(*piVar8 + 0x31c));
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = spawnRolesTeam == *(MVTeam__Enum *)&pMVar4->visible;
      MStack_5.index = pMVar4->index;
      MStack_5.name = pMVar4->name;
      MStack_5.actualWidth = pMVar4->actualWidth;
      MStack_5.width = pMVar4->width;
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      MStack_5.visible = pMVar4->visible;
      MStack_5._17_3_ = *(undefined3 *)&pMVar4->field_0x11;
      if ((GameObject *)pMVar4->index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pMVar4->index,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      MStack_5.visible = pMVar4->visible;
      MStack_5._17_3_ = *(undefined3 *)&pMVar4->field_0x11;
      if (pMVar4->name == (String *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pMVar4->name,!value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      index = index + 1;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffe8,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = teamSelected == *(MVTeam__Enum *)&pMVar3->visible;
      pLVar2 = (this->fields).teamButtons;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if ((GameObject *)pMVar3->index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pMVar3->index,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).teamButtons;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                         ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffd4,
                          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if (pMVar3->name == (String *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pMVar3->name,!value,(MethodInfo *)0x0);
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

