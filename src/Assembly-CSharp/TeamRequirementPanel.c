
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  pTVar1 = this;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
        (unaff_EDI = (pMVar3->fields).teamNames,
        unaff_EDI != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (this = (TeamRequirementPanel *)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
       , pTVar1 = (TeamRequirementPanel *)team, team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        pDVar4 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
        pIVar5 = (Int32Enum__Enum *)func_?(team);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar5,
                             method_00);
        unaff_EDI = pDVar4;
        if (unaff_EBX == (Text *)0x0) goto code_?;
        pTVar7 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar6);
        unaff_EBX = pTVar7;
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          func_?(team);
          return;
        }
      }
      func_?(team,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
code_?:
  uVar8 = func_?();
  iVar9 = (int)uVar8;
  bVar10 = *extraout_ECX;
  bVar11 = (byte)extraout_ECX;
  *extraout_ECX = *extraout_ECX + bVar11;
  if (*extraout_ECX != 0) {
    if (-1 < (char)*extraout_ECX) {
      extraout_ECX[(int)((ulonglong)uVar8 >> 0x20) + -0x75] =
           extraout_ECX[(int)((ulonglong)uVar8 >> 0x20) + -0x75] +
           (char)((ulonglong)uVar8 >> 0x28);
    }
    cVar12 = (char)(iVar9 + 1);
    iVar9 = CONCAT31((int3)((uint)(iVar9 + 1) >> 8),cVar12 + -1);
    if (SCARRY1(cVar12,-1)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
code_?:
    (**(code **)(iVar9 + 0xc))();
    return;
  }
  bVar14 = CARRY1(*extraout_ECX,bVar11) || CARRY1(*extraout_ECX + bVar11,CARRY1(bVar10,bVar11));
  *extraout_ECX = *extraout_ECX + bVar11 + CARRY1(bVar10,bVar11);
  if (*extraout_ECX == 0) {
    *extraout_ECX = *extraout_ECX + bVar11 + bVar14;
    if (*extraout_ECX == 0) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    goto code_?;
  }
  ppFVar15 = &unaff_EBX[0xb96df9].fields.m_FontData;
  uVar16 = (uint)bVar14;
  bVar14 = CARRY4((uint)*ppFVar15,(uint)extraout_ECX) ||
           CARRY4((uint)(extraout_ECX + (int)&(*ppFVar15)->klass),uVar16);
  *ppFVar15 = (FontData *)(extraout_ECX + (int)&(*ppFVar15)->klass + uVar16);
  cVar12 = (char)uVar8 + -1;
  cVar17 = cVar12 + bVar14;
  iVar9 = CONCAT31((int3)((ulonglong)uVar8 >> 8),cVar17);
  if (SCARRY1((char)uVar8,-1) == SCARRY1(cVar12,bVar14)) goto code_?;
  if (cVar17 == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    func_?(&TypeInfo__UpdateController);
    uRam_? = 1;
  }
  pAVar18 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__System__Action,unaff_EDI,pTVar1,unaff_EBX);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar18 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar18,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar18 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
    func_?();
    bVar19 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
    if (bVar19 != 0) {
      return;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    *(undefined1 *)&(this->fields).greenNotificationIcon = 0;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      *(undefined1 *)&(this->fields).yellowNotificationIcon = 0;
      TimedPlayReward::TimedPlayReward_RequestRewardPermission
                ((TimedPlayReward *)this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar20 = (Action *)0x0;
    if (pAVar18->klass == TypeInfo__System__Action) {
      pAVar20 = pAVar18;
    }
    if (pAVar20 != (Action *)0x0) {
      TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar20;
      pAVar20 = (Action *)0x0;
      if (pAVar18->klass == TypeInfo__System__Action) {
        pAVar20 = pAVar18;
      }
      if (pAVar20 == (Action *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

