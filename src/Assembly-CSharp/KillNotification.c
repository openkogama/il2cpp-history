
/* String GetKillText(Dictionary`2[System.Object,System.Object], Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText
                   (Dictionary_2_System_Object_System_Object_ *data,bool shotSelf,MethodInfo *method
                   )

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT13(8,(undefined3)uStack_1);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pPVar3 = extraout_ECX;
  }
  else {
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_1._0_3_ = CONCAT12(0x13,(undefined2)uStack_1);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 2);
    pSVar4 = (String *)
             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
             CollectionExtensions_GetValueOrDefault_5
                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)data,pOVar2,
                        (Object *)::StringLiteral__,
                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                       );
    pSVar5 = (String *)0x0;
    if (pSVar4 != (String *)0x0) {
      if (pSVar4->klass == TypeInfo__System__String) {
        pSVar5 = pSVar4;
      }
      pSVar6 = TypeInfo__System__String;
      if (pSVar5 == (String *)0x0) goto code_?;
    }
    if (unaff_EDI.m_Index == 0) goto code_?;
    pPVar3 = TypeInfo__MV__Common__PlayerKilledByType;
    if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) ==
        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
      pbVar7 = (byte *)func_?(unaff_EDI.m_Index);
      pSVar5 = KillNotification_GetKillText_1((uint)*pbVar7,shotSelf,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  pSVar4 = (String *)func_?(unaff_EDI.m_Index,pPVar3);
  pSVar6 = extraout_ECX_00;
code_?:
  func_?(pSVar4,pSVar6);
  pcVar8 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar8)();
  return pSVar5;
}


/* String GetKillText(PlayerKilledByType, Boolean, String) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText_1
                   (PlayerKilledByType__Enum type,bool shotSelf,String *weaponName,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__color___0___1___color__was_elim);
    func_?(&StringLiteral__color___0___1___color__was_kill);
    func_?(&StringLiteral__color___0___1___color__blew_up_);
    func_?(&StringLiteral__color___0___1___color__was_burn);
    func_?(&StringLiteral_None);
    func_?(&StringLiteral__color___0___1___color__fell_off);
    func_?(&StringLiteral__color___2___3___color__incinera);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral_a_melee_weapon_);
    func_?(&StringLiteral__color___2___3___color__leeched_);
    func_?(&StringLiteral__color___0___1___color__shot_the);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__got_caug);
    func_?(&StringLiteral__color___0___1___color__was_crus);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral_a_custom_gun_);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___2___3___color__sniped__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__color___0___1___color__respawne);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__color___0___1___color__hit_the_);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if (weaponName != (String *)0x0) {
    if (0x1e < (weaponName->fields)._stringLength) {
      pSVar1 = mscorlib.dll::System::String::String_Substring_1(weaponName,0,0x1b,(MethodInfo *)0x0)
      ;
      weaponName = mscorlib.dll::System::String::String_Concat_3
                             (pSVar1,::StringLiteral____,(MethodInfo *)0x0);
    }
    switch(type & 0xff) {
    case PlayerKilledByType__Enum_None:
      pSVar1 = TM::TM__(StringLiteral_None,(MethodInfo *)0x0);
      return pSVar1;
    default:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_BazookaGun:
      if (shotSelf == 0) {
        pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
        return pSVar1;
      }
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__shot_the,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_RailGun:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__sniped__,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Suicide:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__respawne,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Impact:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__hit_the_,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Environmental:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__was_kill,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_MeleeWeapon:
      bVar2 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_a_melee_weapon_;
      break;
    case PlayerKilledByType__Enum_Explosive:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__blew_up_,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Fire:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__was_burn,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_FallOffWorld:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__fell_off,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Mutant:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Shotgun:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_FlameThrower:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__incinera,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Crushed:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__was_crus,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_Ghost:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__got_caug,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_AdvancedGhost:
      pSVar1 = TM::TM__(StringLiteral__color___0___1___color__was_elim,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_RayHealGun:
      pSVar1 = TM::TM__(StringLiteral__color___2___3___color__leeched_,(MethodInfo *)0x0);
      return pSVar1;
    case PlayerKilledByType__Enum_CustomGun:
      bVar2 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_a_custom_gun_;
    }
    if (bVar2 == 0) {
      pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
    }
    else {
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (weaponName,::StringLiteral__,(MethodInfo *)0x0);
    }
    str0 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = (String *)func_?();
  return pSVar1;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KillNotification::KillNotification_Initialize
               (KillNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    args.m_Index = (int32_t)(pMVar1->fields).playerContainer;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                          pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (((Object__Array *)args.m_Index != (Object__Array *)0x0) && (TVar3.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) {
code_?:
          func_?(TVar3.m_Index);
code_?:
          uVar4 = func_?();
          func_?(uVar4);
code_?:
          uVar4 = func_?();
          func_?(uVar4);
code_?:
          uVar4 = func_?();
          func_?(uVar4);
code_?:
          uVar4 = func_?();
          func_?(uVar4);
          goto code_?;
        }
        piVar5 = (int32_t *)func_?();
        pMVar6 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)args.m_Index,*piVar5,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          args.m_Index = (int32_t)(pMVar1->fields).playerContainer;
          uStack_7 = 7;
          pOVar2 = (Object *)func_?(TypeInfo__System__Byte);
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                              pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (((Object__Array *)args.m_Index != (Object__Array *)0x0) && (TVar3.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar5 = (int32_t *)func_?();
            pMVar8 = MVPlayerContainer::MVPlayerContainer_get_Item
                                ((MVPlayerContainer *)args.m_Index,*piVar5,(MethodInfo *)0x0);
            if ((((pMVar8 != (MVPlayer *)0x0) &&
                 (pUVar9 = (pMVar8->fields)._UserProfileData_k__BackingField,
                 pUVar9 != (UserProfileData *)0x0)) && (pMVar6 != (MVPlayer *)0x0)) &&
               (pUVar10 = (pMVar6->fields)._UserProfileData_k__BackingField,
               pUVar10 != (UserProfileData *)0x0)) {
              shotSelf = mscorlib.dll::System::String::String_op_Equality
                                   ((pUVar9->fields).UserName,(pUVar10->fields).UserName,
                                    (MethodInfo *)0x0);
              method_00 = (MethodInfo *)&UNK_?;
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
                pLVar11 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
                if (pLVar11 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  if ((pLVar11->fields)._size < 2) {
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pCVar12 = Styles::Styles_GetColor
                                        ((Color *)&stack0xffffffc8,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                    method_00 = (MethodInfo *)0x7;
                    fStack_13 = pCVar12->r;
                    fStack_14 = pCVar12->g;
                    fStack_15 = pCVar12->b;
                    fStack_16 = pCVar12->a;
                    pCVar12 = Styles::Styles_GetColor
                                        ((Color *)&stack0xffffffc8,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                    fStack_17 = pCVar12->g;
                    fStack_18 = pCVar12->b;
                    fStack_19 = pCVar12->a;
code_?:
                    pTVar20 = (this->fields).Label;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?(&
                                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                     );
                      func_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                      func_?(&TypeInfo__MV__Common__PlayerKilledByType);
                      func_?(&TypeInfo__System__String);
                      func_?(&::StringLiteral__);
                      cRam_? = '\x01';
                    }
                    uStack_21 = 8;
                    pOVar2 = (Object *)func_?(TypeInfo__System__Byte);
                    args = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)data,pOVar2,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                    uStack_22 = 0x13;
                    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_22);
                    pSVar23 = (String *)
                              mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                              CollectionExtensions_GetValueOrDefault_5
                                        ((IReadOnlyDictionary_2_System_Object_System_Object_ *)data,
                                         pOVar2,(Object *)::StringLiteral__,
                                         System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                        );
                    pSVar24 = (String *)0x0;
                    if (pSVar23 != (String *)0x0) {
                      if (pSVar23->klass == TypeInfo__System__String) {
                        pSVar24 = pSVar23;
                      }
                      if (pSVar24 == (String *)0x0) goto code_?;
                    }
                    if (args.m_Index != 0) {
                      if (*(Il2CppClass **)(*(int *)args.m_Index + 0x20) ==
                          (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
                        pbVar25 = (byte *)func_?();
                        pSVar24 = KillNotification_GetKillText_1
                                            ((uint)*pbVar25,shotSelf,pSVar24,(MethodInfo *)0x0);
                        method_01 = TypeInfo__System__Object;
                        args.m_Index = func_?(TypeInfo__System__Object,4);
                        c.g = fStack_14;
                        c.r = fStack_13;
                        c.b = fStack_15;
                        c.a = fStack_16;
                        CVar26 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                 Color32_op_Implicit(c,(MethodInfo *)0x0);
                        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Styles);
                        }
                        pSVar23 = Styles::Styles_ColorToHex
                                            ((Color32)((ulonglong)CVar26 & 0xffffffff),
                                             (MethodInfo *)method_01);
                        if ((Object__Array *)args.m_Index == (Object__Array *)0x0)
                        goto code_?;
                        if (pSVar23 != (String *)0x0) {
                          iVar27 = func_?(pSVar23);
                          if (iVar27 == 0) goto code_?;
                        }
                        if (((Object__Array *)args.m_Index)->max_length != 0) {
                          ((Object__Array *)args.m_Index)->vector[0] = (Object *)pSVar23;
                          func_?(((Object__Array *)args.m_Index)->vector);
                          pUVar9 = (pMVar8->fields)._UserProfileData_k__BackingField;
                          if (pUVar9 == (UserProfileData *)0x0) goto code_?;
                          pSVar23 = (pUVar9->fields).UserName;
                          if (pSVar23 != (String *)0x0) {
                            iVar27 = func_?(pSVar23);
                            if (iVar27 == 0) goto code_?;
                          }
                          if (1 < ((Object__Array *)args.m_Index)->max_length) {
                            ((Object__Array *)args.m_Index)->vector[1] = (Object *)pSVar23;
                            func_?(((Object__Array *)args.m_Index)->vector + 1);
                            c_00.g = fStack_17;
                            c_00.r = (float)pSVar23;
                            c_00.b = fStack_18;
                            c_00.a = fStack_19;
                            CVar26 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                     Color32_op_Implicit(c_00,(MethodInfo *)0x0);
                            pSVar23 = Styles::Styles_ColorToHex
                                                ((Color32)((ulonglong)CVar26 & 0xffffffff),method_00
                                                );
                            if (pSVar23 != (String *)0x0) {
                              iVar27 = func_?(pSVar23);
                              if (iVar27 == 0) goto code_?;
                            }
                            if (2 < ((Object__Array *)args.m_Index)->max_length) {
                              ((Object__Array *)args.m_Index)->vector[2] = (Object *)pSVar23;
                              func_?(((Object__Array *)args.m_Index)->vector + 2);
                              pUVar9 = (pMVar6->fields)._UserProfileData_k__BackingField;
                              if (pUVar9 != (UserProfileData *)0x0) {
                                pSVar23 = (pUVar9->fields).UserName;
                                if (pSVar23 != (String *)0x0) {
                                  iVar27 = func_?(pSVar23);
                                  if (iVar27 == 0) goto code_?;
                                }
                                if (((Object__Array *)args.m_Index)->max_length < 4)
                                goto code_?;
                                ((Object__Array *)args.m_Index)->vector[3] = (Object *)pSVar23;
                                func_?(((Object__Array *)args.m_Index)->vector + 3);
                                pSVar24 = mscorlib.dll::System::String::String_Format_3
                                                    (pSVar24,(Object__Array *)args.m_Index,
                                                     (MethodInfo *)0x0);
                                if (pTVar20 != (Text *)0x0) {
                                  (*(code *)(pTVar20->klass->vtable).set_text.method)(pTVar20,pSVar24)
                                  ;
                                  this_01 = (this->fields).tertiaryNotificationUI;
                                  l = (*(code *)(this->klass->vtable).get_Lifetime.method)
                                                (this,(this->klass->vtable).Initialize.methodPtr);
                                  if (this_01 != (TertiaryNotificationUI *)0x0) {
                                    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                                              (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              goto code_?;
                            }
                          }
                        }
code_?:
                        func_?();
                      }
                      func_?(args.m_Index);
                    }
                  }
                  else {
                    team = (pMVar8->fields)._Team_k__BackingField;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pCVar12 = Styles::Styles_GetTeamColor
                                        ((Color *)&stack0xffffffc8,team,0,(MethodInfo *)0x0);
                    fStack_13 = pCVar12->r;
                    fStack_14 = pCVar12->g;
                    fStack_15 = pCVar12->b;
                    fStack_16 = pCVar12->a;
                    pCVar12 = Styles::Styles_GetTeamColor
                                        ((Color *)&stack0xffffffc8,
                                         (pMVar6->fields)._Team_k__BackingField,0,(MethodInfo *)0x0
                                        );
                    fStack_17 = pCVar12->g;
                    fStack_18 = pCVar12->b;
                    fStack_19 = pCVar12->a;
                    pMVar28 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                        ((MethodInfo *)0x0);
                    fVar29 = _UNK_?;
                    fVar30 = _UNK_?;
                    fVar31 = _UNK_?;
                    fVar32 = _UNK_?;
                    fVar33 = _UNK_?;
                    fVar34 = _UNK_?;
                    if (pMVar28 != (MVLocalPlayer *)0x0) {
                      pEVar35 = (this->fields).Background;
                      if ((pMVar28->fields)._._Team_k__BackingField ==
                          (pMVar8->fields)._Team_k__BackingField) {
                        if (pEVar35 != (EnhancedGradientEffect *)0x0) {
                          (pEVar35->fields).top.r = _UNK_?;
                          (pEVar35->fields).top.g = fVar34;
                          (pEVar35->fields).top.b = fVar33;
                          (pEVar35->fields).top.a = fVar32;
                          fVar34 = _UNK_?;
                          fVar33 = _UNK_?;
                          fVar32 = _UNK_?;
                          fVar31 = _UNK_?;
                          goto code_?;
                        }
                      }
                      else if (pEVar35 != (EnhancedGradientEffect *)0x0) {
                        (pEVar35->fields).top.r = _UNK_?;
                        (pEVar35->fields).top.g = fVar31;
                        (pEVar35->fields).top.b = fVar30;
                        (pEVar35->fields).top.a = fVar29;
                        fVar34 = _UNK_?;
                        fVar33 = _UNK_?;
                        fVar32 = _UNK_?;
                        fVar31 = _UNK_?;
code_?:
                        pEVar35 = (this->fields).Background;
                        if (pEVar35 != (EnhancedGradientEffect *)0x0) {
                          (pEVar35->fields).bottom.r = fVar34;
                          (pEVar35->fields).bottom.g = fVar33;
                          (pEVar35->fields).bottom.b = fVar32;
                          (pEVar35->fields).bottom.a = fVar31;
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  pSVar23 = (String *)func_?();
code_?:
  func_?(pSVar23);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}

