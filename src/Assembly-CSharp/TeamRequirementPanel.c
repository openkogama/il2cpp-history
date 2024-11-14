
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
  pIVar1 = (this->fields)._.checkmark;
  bVar2 = 0;
  uVar3 = (int)pIVar1 < 0;
  if (pIVar1 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    bVar2 = 0;
    uVar3 = (int)pMVar4 < 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar5 = (pMVar4->fields).teamManager;
      bVar2 = 0;
      uVar3 = (int)pMVar5 < 0;
      if (pMVar5 != (MVTeamManager *)0x0) {
        this_00 = (pMVar5->fields).teamNames;
        bVar2 = 0;
        uVar3 = (int)this_00 < 0;
        if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
          bVar2 = 0;
          uVar3 = (int)team < 0;
          this = (TeamRequirementPanel *)team;
          if (team != (Object *)0x0) {
            pIVar6 = (team->klass->_0).element_class;
            pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar2 = pIVar6 < pIVar7;
            iVar8 = (int)pIVar6 - (int)pIVar7;
            if (pIVar6 == pIVar7) {
              pIVar9 = (Int32Enum__Enum *)func_?(team);
              pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar9,
                                   method_00);
              bVar2 = 0;
              uVar3 = (int)unaff_EBX < 0;
              if (unaff_EBX == (Text *)0x0) goto code_?;
              pTVar11 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                methodPtr;
              (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar10);
              unaff_EBX = pTVar11;
              pIVar6 = (team->klass->_0).element_class;
              pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar2 = pIVar6 < pIVar7;
              iVar8 = (int)pIVar6 - (int)pIVar7;
              if (pIVar6 == pIVar7) {
                func_?(team);
                return;
              }
            }
            uVar3 = iVar8 < 0;
            func_?(team,TypeInfo__MV__WorldObject__MVTeam);
          }
        }
      }
    }
  }
code_?:
  bVar12 = func_?();
  if ((bool)uVar3) {
    pbVar13 = (byte *)(extraout_ECX + 0x2b);
    bVar14 = (byte)((uint)unaff_EBX >> 8);
    bVar15 = CARRY1(*pbVar13,bVar14) || CARRY1(*pbVar13 + bVar14,bVar2);
    *pbVar13 = *pbVar13 + bVar14 + bVar2;
    pbVar13 = (byte *)(extraout_ECX + 0x2b);
    bVar2 = *pbVar13;
    bVar16 = *pbVar13;
    *pbVar13 = bVar16 + bVar14 + bVar15;
    *(char *)(extraout_ECX + 0x2b) =
         *(char *)(extraout_ECX + 0x2b) + bVar14 +
         (CARRY1(bVar2,bVar14) || CARRY1(bVar16 + bVar14,bVar15));
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  ppCVar18 = &unaff_EBX[0x97977].fields._._.m_Canvas;
  *ppCVar18 = (Canvas *)((int)&(*ppCVar18)->klass + 1);
  if (*ppCVar18 == (Canvas *)0x0) {
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                       ((Behaviour *)this,(MethodInfo *)0x0);
  }
  if (bVar12 != 0) {
    pFVar19 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                        ((MethodInfo *)0x0);
    if (pFVar19 != (FlagDebriefingControl *)0x0) {
      if ((pFVar19->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        (*(((pFVar19->fields).OnFlagDebriefingEnd)->fields)._._.invoke_impl)();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?(4);
        *(undefined2 *)&this[1].monitor = 0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          pIVar20 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
          pIVar1 = (this->fields).yellowNotificationIcon;
          this[1].fields._.checkmark = pIVar20;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      ((CanvasGroup *)pIVar1,0.0,(MethodInfo *)0x0);
            pFVar19 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                                ((MethodInfo *)0x0);
            if (pFVar19 != (FlagDebriefingControl *)0x0) {
              fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              (pFVar19->fields).IsInFlagDebriefing = 0;
              (pFVar19->fields).RunStartTime = fVar21;
              if ((pFVar19->fields).OnFlagCountDownEnd != (Action *)0x0) {
                (*(((pFVar19->fields).OnFlagCountDownEnd)->fields)._._.invoke_impl)();
              }
              pGVar22 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar22 != (GameEventManager *)0x0) &&
                 ((pGVar22->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if (*(int *)(in_stack_23 + 0x14) != 0) {
                  (**(code **)(*(int *)(in_stack_23 + 0x14) + 0xc))();
                }
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  return;
}

