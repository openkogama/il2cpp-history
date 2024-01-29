
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.checkmark;
  cVar2 = true;
  if (pIVar1 == (Image *)0x0) {
code_?:
    bVar3 = 0;
    func_?();
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    pTVar4 = (this->fields)._.textField;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    cVar2 = true;
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    pMVar6 = (pMVar5->fields).teamManager;
    cVar2 = true;
    if (pMVar6 == (MVTeamManager *)0x0) goto code_?;
    this_00 = (pMVar6->fields).teamNames;
    cVar2 = true;
    if ((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) ||
       (cVar2 = true, team == (Object *)0x0)) goto code_?;
    pIVar7 = (team->klass->_0).element_class;
    pIVar8 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    cVar2 = '\0';
    if (pIVar7 == pIVar8) {
      pIVar9 = (Int32Enum__Enum *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__get_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar9,method_00);
      cVar2 = pTVar4 == (Text *)0x0;
      if (!(bool)cVar2) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
        pIVar7 = (team->klass->_0).element_class;
        pIVar8 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
        bVar3 = pIVar7 < pIVar8;
        cVar2 = pIVar7 == pIVar8;
        if (!(bool)cVar2) goto code_?;
        puVar10 = (undefined4 *)func_?();
        switch(*puVar10) {
        case 0:
          pIVar1 = (this->fields).requirementImage;
          cVar2 = pIVar1 == (Image *)0x0;
          if (!(bool)cVar2) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).blueNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 1:
          pIVar1 = (this->fields).requirementImage;
          cVar2 = pIVar1 == (Image *)0x0;
          if (!(bool)cVar2) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).redNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 2:
          pIVar1 = (this->fields).requirementImage;
          cVar2 = pIVar1 == (Image *)0x0;
          if (!(bool)cVar2) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).greenNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 3:
          pIVar1 = (this->fields).requirementImage;
          cVar2 = pIVar1 == (Image *)0x0;
          if (!(bool)cVar2) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).yellowNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        default:
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
  cVar11 = func_?();
  iVar12 = extraout_ECX + -1;
  if (iVar12 == 0 || cVar2 == '\0') {
    bVar13 = (byte)((uint)iVar12 >> 8);
    bVar14 = bVar13 - 0x1f;
    cVar2 = bVar14 + bVar3;
    pcVar15 = (char *)CONCAT31(0xd2103e,cVar2);
    if (extraout_ECX != 2 && cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar15 = *pcVar15 + cVar11 + (0x1e < bVar13 || CARRY1(bVar14,bVar3));
    if (iVar12 == 2) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?(&StringLiteral_Adding_obj_file__);
  func_?(&StringLiteral___kogama_data_folder__);
  func_?(&StringLiteral__obj);
  func_?(&StringLiteral_Exported__);
  func_?(&StringLiteral__files_successfully_to_);
  func_?(&::StringLiteral_____);
  uRam_? = 1;
  IVar17.m_value = 0;
  puVar18 = &UNK_?;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((((pMVar5 == (MVNetworkGame *)0x0) ||
        (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
        pMVar19 == (MVLocalPlayer *)0x0)) ||
       (pSVar20 = (pMVar19->fields).spawnRoleDataMediator, pSVar20 == (SpawnRoleDataMediator *)0x0))
      || ((id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Object]::
                SpawnRoleVariable_1_System_Object__op_Implicit
                          ((SpawnRoleVariable_1_System_Object_ *)(pSVar20->fields).woId,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                          ), this_02 == (MVWorldObjectClientManager *)0x0 ||
          (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_02,(int32_t)id,(MethodInfo *)0x0),
          pMVar21 == (MVWorldObject *)0x0)))) ||
     ((this_01 = pMVar21[1].fields.inputLinkRefs, this_01 == (List_1_MV_WorldObject_Link_ *)0x0 ||
      (pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           ((GameObject *)this_01,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           ), pOVar22 == (Object__Array *)0x0)))) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    for (; IVar17.m_value < (int)pOVar22->max_length; IVar17.m_value = IVar17.m_value + 1) {
      if (pOVar22->max_length <= (uint)IVar17.m_value) {
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      mf = (MeshFilter *)pOVar22->vector[IVar17.m_value];
      pSVar23 = (String__Array *)func_?();
      if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar24 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                          ((MethodInfo *)0x0);
      if (pSVar23 == (String__Array *)0x0) goto code_?;
      if (pSVar23->max_length == 0) goto code_?;
      pSVar23->vector[0] = pSVar24;
      func_?();
      if (pSVar23->max_length < 2) goto code_?;
      pSVar23->vector[1] = ::StringLiteral_____;
      func_?();
      if (pOVar22->max_length <= (uint)IVar17.m_value) goto code_?;
      if (((Component *)pOVar22->vector[IVar17.m_value] == (Component *)0x0) ||
         (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pOVar22->vector[IVar17.m_value],(MethodInfo *)0x0),
         pGVar25 == (GameObject *)0x0)) goto code_?;
      pSVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)pGVar25,(MethodInfo *)0x0);
      if (pSVar23->max_length < 3) goto code_?;
      pSVar23->vector[2] = pSVar24;
      func_?();
      pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
      if (pSVar23->max_length < 4) goto code_?;
      pSVar23->vector[3] = pSVar24;
      func_?();
      if (pSVar23->max_length < 5) goto code_?;
      pSVar23->vector[4] = StringLiteral__obj;
      func_?();
      pSVar24 = mscorlib.dll::System::String::String_Concat_6(pSVar23,(MethodInfo *)0x0);
      ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar24,0,(MethodInfo *)0x0);
      if (pOVar22->max_length <= (uint)IVar17.m_value) goto code_?;
      if (((Component *)pOVar22->vector[IVar17.m_value] == (Component *)0x0) ||
         (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pOVar22->vector[IVar17.m_value],(MethodInfo *)0x0),
         pGVar25 == (GameObject *)0x0)) goto code_?;
      pSVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)pGVar25,(MethodInfo *)0x0);
      pSVar24 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Adding_obj_file__,pSVar24,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar24,(MethodInfo *)0x0);
    }
    pSVar23 = (String__Array *)func_?();
    if (pSVar23 == (String__Array *)0x0) goto code_?;
    if (pSVar23->max_length == 0) goto code_?;
    pSVar23->vector[0] = StringLiteral_Exported__;
    func_?();
    pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xffffffe4,(MethodInfo *)0x0);
    if (pSVar23->max_length < 2) goto code_?;
    pSVar23->vector[1] = pSVar24;
    func_?();
    if (pSVar23->max_length < 3) goto code_?;
    pSVar23->vector[2] = StringLiteral__files_successfully_to_;
    func_?();
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar24 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                        ((MethodInfo *)0x0);
    if (3 < pSVar23->max_length) {
      pSVar23->vector[3] = pSVar24;
      func_?();
      if (4 < pSVar23->max_length) {
        pSVar23->vector[4] = StringLiteral___kogama_data_folder__;
        func_?();
        pSVar24 = mscorlib.dll::System::String::String_Concat_6(pSVar23,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar24,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = puVar18;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

