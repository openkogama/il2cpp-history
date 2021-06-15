
/* Void Initialize(MVTeam, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
               (SpawnRoleTeamEditor *this,MVTeam__Enum spawnRolesTeam,
               UnityAction_1_MV_WorldObject_MVTeam_ *onTeamChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  (this->fields).onTeamChangeCallback = onTeamChangeCallback;
  pLVar2 = (this->fields).teamButtons;
  while (pLVar2 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                       );
    if ((int)pOVar3 <= iVar1) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_00,(MethodInfo *)0x0), this_01 == (SkyParam *)0x0
       )) break;
    this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                         (MethodInfo *)0x0);
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    puVar4 = (undefined4 *)
             func_?(&uStack_5,pLVar2,iVar1,
                             MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                            );
    uStack_6 = *puVar4;
    uStack_7 = puVar4[1];
    uStack_8 = puVar4[2];
    uStack_9 = puVar4[3];
    if (this_02 == (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
             ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                       (this_02,puVar4[4],
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                       );
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    iVar10 = func_?(&uStack_6,pLVar2,iVar1,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                           );
    uStack_11 = *(undefined4 *)(iVar10 + 0x10);
    if (*(int *)(iVar10 + 8) == 0) break;
    func_?(0x49,*(int *)(iVar10 + 8),pOVar3);
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    iVar10 = func_?(&uStack_6,pLVar2,iVar1,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                           );
    uStack_11 = *(undefined4 *)(iVar10 + 0x10);
    if (*(int *)(iVar10 + 0xc) == 0) break;
    func_?(0x49,*(int *)(iVar10 + 0xc),pOVar3);
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    puVar4 = (undefined4 *)
             func_?(&uStack_6,pLVar2,iVar1,
                             MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                            );
    MVar12 = puVar4[4];
    uStack_5 = *puVar4;
    uStack_13 = puVar4[1];
    uStack_14 = puVar4[2];
    uStack_15 = puVar4[3];
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    puVar4 = (undefined4 *)
             func_?(&uStack_6,pLVar2,iVar1,
                             MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                            );
    uStack_11 = puVar4[4];
    if ((GameObject *)*puVar4 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)*puVar4,spawnRolesTeam == MVar12,(MethodInfo *)0x0);
    pLVar2 = (this->fields).teamButtons;
    if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    iVar10 = func_?(&uStack_6,pLVar2,iVar1,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                           );
    uStack_11 = *(undefined4 *)(iVar10 + 0x10);
    if (*(GameObject **)(iVar10 + 4) == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)(iVar10 + 4),spawnRolesTeam != MVar12,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
    pLVar2 = (this->fields).teamButtons;
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).onTeamChangeCallback;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,teamSelected,
               MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>__Invoke_MV__WorldObject__MVTeam_
              );
    index = 0;
    pLVar1 = (this->fields).teamButtons;
    while (pLVar1 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffe8,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = teamSelected == pSVar3->team;
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if (pSVar3->buttonSelected == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar3->buttonSelected,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      pSVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
               List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                         ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)&stack0xffffffd4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if (pSVar3->buttonNotSelected == (GameObject *)0x0) break;
      teamSelected = (MVTeam__Enum)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pSVar3->buttonNotSelected,!value,(MethodInfo *)0x0);
      index = index + 1;
      pLVar1 = (this->fields).teamButtons;
    }
  }
  func_?(0);
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

