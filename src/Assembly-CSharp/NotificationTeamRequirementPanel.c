
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.checkmark;
  uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
  if (pIVar1 == (Image *)0x0) {
code_?:
    func_?();
    method_01 = extraout_ECX;
    team = unaff_EDI;
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    pTVar3 = (this->fields)._.textField;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    uVar2 = (POPCOUNT((uint)pMVar4 & 0xff) & 1U) == 0;
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = (pMVar4->fields).teamManager;
    uVar2 = (POPCOUNT((uint)pMVar5 & 0xff) & 1U) == 0;
    if (pMVar5 == (MVTeamManager *)0x0) goto code_?;
    this_00 = (pMVar5->fields).teamNames;
    uVar2 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if ((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) ||
       (uVar2 = (POPCOUNT((uint)team & 0xff) & 1U) == 0, unaff_EDI = team, team == (Object *)0x0))
    goto code_?;
    uVar6 = (int)(team->klass->_0).element_class -
            (int)(TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
    uVar2 = (POPCOUNT(uVar6 & 0xff) & 1U) == 0;
    method_01 = TypeInfo__MV__WorldObject__MVTeam;
    if (uVar6 == 0) {
      pIVar7 = (Int32Enum__Enum *)func_?(team);
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar7,
                           method_00);
      uVar2 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,pOVar8,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        uVar6 = (int)(team->klass->_0).element_class -
                (int)(TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
        uVar2 = (POPCOUNT(uVar6 & 0xff) & 1U) == 0;
        method_01 = TypeInfo__MV__WorldObject__MVTeam;
        if (uVar6 != 0) goto code_?;
        unaff_EDI = (Object *)&UNK_?;
        puVar9 = (undefined4 *)func_?(team);
        switch(*puVar9) {
        case 0:
          pIVar1 = (this->fields).requirementImage;
          uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).blueNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 1:
          pIVar1 = (this->fields).requirementImage;
          uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).redNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 2:
          pIVar1 = (this->fields).requirementImage;
          uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).greenNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 3:
          pIVar1 = (this->fields).requirementImage;
          uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            method_01 = (MVTeam__Enum__Class *)0x0;
            goto code_?;
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
  uVar10 = func_?(team);
  pIVar1 = (Image *)uVar10;
  if ((bool)uVar2) {
code_?:
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,(this->fields).yellowNotificationIcon,(MethodInfo *)method_01);
    return;
  }
  in_AF = 9 < ((byte)uVar10 & 0xf) | in_AF;
  pbVar11 = (byte *)((int)((ulonglong)uVar10 >> 0x20) + -0x55efc01f);
  bVar12 = *pbVar11;
  bVar13 = (byte)((ulonglong)uVar10 >> 0x20);
  bVar14 = *pbVar11;
  *pbVar11 = bVar14 + bVar13 + in_AF;
  if (extraout_ECX_00 == 1 || *pbVar11 != 0) {
    if (extraout_ECX_00 == 2 ||
        (byte)(bVar13 + ((byte)uVar10 + in_AF * -6 & 0xf) +
              (CARRY1(bVar12,bVar13) || CARRY1(bVar14 + bVar13,in_AF))) != '\0') {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    return;
  }
  func_?(&TypeInfo__PlayButtonBase____c);
  uRam_? = 1;
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar16 != (MVLocalPlayer *)0x0)) {
    bVar17 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(pMVar16,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar16->fields)._.playerState == 3) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
                  (this_01,0,(MethodInfo *)0x0);
      }
    }
    if (UNK_? != '\0') {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)&UNK_?,(MethodInfo *)0x0);
      if ((TypeInfo__PlayButtonBase____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__PlayButtonBase____c->static_fields->__9__3_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PlayButtonBase____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__PlayButtonBase____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__PlayButtonBase____c___StartPlaying_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayButtonBase____c->static_fields->__9__3_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

