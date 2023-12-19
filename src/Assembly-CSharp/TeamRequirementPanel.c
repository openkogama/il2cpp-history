
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
  bVar1 = 0;
  pTVar2 = this;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    bVar1 = 0;
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pMVar4 = (pMVar3->fields).teamManager;
      bVar1 = 0;
      if (pMVar4 != (MVTeamManager *)0x0) {
        unaff_EDI = (pMVar4->fields).teamNames;
        bVar1 = 0;
        if (unaff_EDI != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
          this = (TeamRequirementPanel *)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
          ;
          bVar1 = 0;
          pTVar2 = (TeamRequirementPanel *)team;
          if (team != (Object *)0x0) {
            pIVar5 = (team->klass->_0).element_class;
            pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar1 = pIVar5 < pIVar6;
            if (pIVar5 == pIVar6) {
              pDVar7 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
              pIVar8 = (Int32Enum__Enum *)func_?(team);
              pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,
                                   *pIVar8,method_00);
              unaff_EDI = pDVar7;
              bVar1 = 0;
              if (unaff_EBX == (Text *)0x0) goto code_?;
              pTVar10 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
              ;
              (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar9);
              unaff_EBX = pTVar10;
              pIVar5 = (team->klass->_0).element_class;
              pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar1 = pIVar5 < pIVar6;
              if (pIVar5 == pIVar6) {
                func_?(team);
                return;
              }
            }
            func_?(team,TypeInfo__MV__WorldObject__MVTeam);
          }
        }
      }
    }
  }
code_?:
  uVar11 = func_?();
  iVar12 = (int)uVar11;
  puVar13 = (uint *)(iVar12 + 0x3d);
  bVar14 = (TeamRequirementPanel *)*puVar13 < pTVar2 || *puVar13 - (int)pTVar2 < (uint)bVar1;
  *puVar13 = (*puVar13 - (int)pTVar2) - (uint)bVar1;
  bVar15 = (byte)unaff_EBX;
  bVar1 = *extraout_ECX;
  bVar16 = *extraout_ECX + bVar15;
  bVar17 = CARRY1(*extraout_ECX,bVar15) || CARRY1(bVar16,bVar14);
  *extraout_ECX = bVar16 + bVar14;
  if (SCARRY1(bVar1,bVar15) != SCARRY1(bVar16,bVar14)) {
    if (-1 < (char)*extraout_ECX) {
      extraout_ECX[(int)((ulonglong)uVar11 >> 0x20) + -0x75] =
           extraout_ECX[(int)((ulonglong)uVar11 >> 0x20) + -0x75] +
           (char)((ulonglong)uVar11 >> 0x28);
    }
    cVar18 = (char)(iVar12 + 1);
    iVar12 = CONCAT31((int3)((uint)(iVar12 + 1) >> 8),cVar18 + -1);
    if (SCARRY1(cVar18,-1)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
code_?:
    (**(code **)(iVar12 + 0xc))();
    return;
  }
  bVar1 = *extraout_ECX;
  bVar16 = *extraout_ECX + bVar15;
  bVar14 = CARRY1(*extraout_ECX,bVar15) || CARRY1(bVar16,bVar17);
  *extraout_ECX = bVar16 + bVar17;
  if (SCARRY1(bVar1,bVar15) == SCARRY1(bVar16,bVar17)) {
    bVar1 = *extraout_ECX;
    bVar16 = *extraout_ECX;
    *extraout_ECX = bVar16 + bVar15 + bVar14;
    if (SCARRY1(bVar1,bVar15) == SCARRY1(bVar16 + bVar15,bVar14)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    goto code_?;
  }
  ppFVar20 = &unaff_EBX[0xb96df9].fields.m_FontData;
  bVar17 = CARRY4((uint)*ppFVar20,(uint)extraout_ECX) ||
           CARRY4((uint)(extraout_ECX + (int)&(*ppFVar20)->klass),(uint)bVar14);
  *ppFVar20 = (FontData *)(extraout_ECX + (int)&(*ppFVar20)->klass + bVar14);
  cVar18 = (char)uVar11 + -1;
  cVar21 = cVar18 + bVar17;
  iVar12 = CONCAT31((int3)((ulonglong)uVar11 >> 8),cVar21);
  if (SCARRY1((char)uVar11,-1) == SCARRY1(cVar18,bVar17)) goto code_?;
  if (cVar21 == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    func_?(&TypeInfo__UpdateController);
    uRam_? = 1;
  }
  pAVar22 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__System__Action,unaff_EDI,pTVar2,unaff_EBX);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar22 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar22,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar22 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
    func_?();
    bVar23 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
    if (bVar23 != 0) {
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
    pAVar24 = (Action *)0x0;
    if (pAVar22->klass == TypeInfo__System__Action) {
      pAVar24 = pAVar22;
    }
    if (pAVar24 != (Action *)0x0) {
      TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar24;
      pAVar24 = (Action *)0x0;
      if (pAVar22->klass == TypeInfo__System__Action) {
        pAVar24 = pAVar22;
      }
      if (pAVar24 == (Action *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

