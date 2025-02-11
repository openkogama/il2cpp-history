
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
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)in_stack_4 >> 0x10);
  uVar5 = (undefined2)((uint)in_stack_6 >> 0x10);
  uVar7 = (undefined2)((uint)in_stack_8 >> 0x10);
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
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__got_caug);
    func_?(&StringLiteral__color___0___1___color__was_crus);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__shot_him);
    func_?(&StringLiteral_a_custom_gun_);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___2___3___color__sniped__);
    uVar7 = 0x11b1;
    func_?(&::StringLiteral__);
    uVar5 = 0x11b3;
    func_?(&StringLiteral__color___0___1___color__respawne);
    uVar3 = 0x11b2;
    func_?(&::StringLiteral__);
    uVar1 = 0x11b3;
    func_?(&StringLiteral__color___0___1___color__hit_the_);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if (weaponName != (String *)0x0) {
    if (0x1e < (weaponName->fields)._stringLength) {
      pSVar9 = mscorlib.dll::System::String::String_Substring_1(weaponName,0,0x1b,(MethodInfo *)0x0)
      ;
      weaponName = mscorlib.dll::System::String::String_Concat_3
                             (pSVar9,::StringLiteral____,(MethodInfo *)0x0);
    }
    switch(type & 0xff) {
    case PlayerKilledByType__Enum_None:
      pSVar9 = TM::TM__(StringLiteral_None,(MethodInfo *)0x0);
      return pSVar9;
    default:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_BazookaGun:
      if (shotSelf == 0) {
        pSVar9 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
        return pSVar9;
      }
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__shot_him,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_RailGun:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__sniped__,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Suicide:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__respawne,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Impact:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__hit_the_,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Environmental:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__was_kill,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_MeleeWeapon:
      bVar10 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar9 = StringLiteral_a_melee_weapon_;
      break;
    case PlayerKilledByType__Enum_Explosive:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__blew_up_,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Fire:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__was_burn,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_FallOffWorld:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__fell_off,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Mutant:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Shotgun:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_FlameThrower:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__incinera,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Crushed:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__was_crus,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_Ghost:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__got_caug,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_AdvancedGhost:
      pSVar9 = TM::TM__(StringLiteral__color___0___1___color__was_elim,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_RayHealGun:
      pSVar9 = TM::TM__(StringLiteral__color___2___3___color__leeched_,(MethodInfo *)0x0);
      return pSVar9;
    case PlayerKilledByType__Enum_CustomGun:
      bVar10 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar9 = StringLiteral_a_custom_gun_;
    }
    if (bVar10 == 0) {
      pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
    }
    else {
      pSVar9 = mscorlib.dll::System::String::String_Concat_3
                         (weaponName,::StringLiteral__,(MethodInfo *)0x0);
    }
    str0 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    pSVar9 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar9,(MethodInfo *)0x0);
    return pSVar9;
  }
  uVar11 = func_?();
  bVar12 = (byte)uVar11;
  bVar13 = *unaff_EBX;
  bVar14 = (byte)((ulonglong)uVar11 >> 0x20);
  bVar15 = *unaff_EBX;
  *unaff_EBX = bVar15 + bVar14 + (0xb8 < bVar12);
  bVar16 = (byte)((ulonglong)uVar11 >> 8);
  *(char *)(unaff_EDI + -0x5defb8fa) =
       *(char *)(unaff_EDI + -0x5defb8fa) + extraout_CL +
       (CARRY1(unaff_retaddr,bVar16) ||
       CARRY1(unaff_retaddr + bVar16,CARRY1(bVar13,bVar14) || CARRY1(bVar15 + bVar14,0xb8 < bVar12)));
  cVar17 = (char)unaff_EBX * '\x02' + (0xb8 < (byte)(bVar12 + 0x8e));
  uVar18 = CONCAT31((int3)((ulonglong)uVar11 >> 8),bVar12 + 0x1c);
  *(char *)(unaff_EDI + 2) = *(char *)(unaff_EDI + 2) + extraout_CH + (0xb8 < (byte)(bVar12 - 0x2b));
  bVar19 = CARRY1(unaff_retaddr_00,bVar14) || CARRY1(unaff_retaddr_00 + bVar14,0xfabdefb8 < uVar18);
  pbVar20 = (byte *)(uVar18 + 0x542104c);
  bVar21 = CARRY1(*pbVar20,extraout_CH) || CARRY1(*pbVar20 + extraout_CH,bVar19);
  *pbVar20 = *pbVar20 + extraout_CH + bVar19;
  pbVar20 = (byte *)(CONCAT31((int3)((uint)unaff_EBX >> 8),cVar17) + 5);
  bVar13 = *pbVar20;
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  bVar15 = *pbVar20;
  *pbVar20 = bVar15 + bVar12 + bVar21;
  cRam_? = cRam_? + extraout_CL + (CARRY1(bVar13,bVar12) || CARRY1(bVar15 + bVar12,bVar21));
  uVar22 = uVar18 + 0xaf6208e;
  pbVar20 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11(bVar12 + (char)uVar22 + (0xfa4befb8 < uVar18 + 0x5421047),cVar17)
                            );
  bVar19 = CARRY1(*pbVar20,bVar14) || CARRY1(*pbVar20 + bVar14,0xf9ecefb8 < uVar22);
  *pbVar20 = *pbVar20 + bVar14 + (0xf9ecefb8 < uVar22);
  bVar21 = CARRY1(*pbVar20,bVar14) || CARRY1(*pbVar20 + bVar14,bVar19);
  *pbVar20 = *pbVar20 + bVar14 + bVar19;
  bVar13 = *pbVar20;
  bVar15 = *pbVar20;
  *pbVar20 = bVar15 + bVar14 + bVar21;
  *pbVar20 = *pbVar20 + bVar14 + (CARRY1(bVar13,bVar14) || CARRY1(bVar15 + bVar14,bVar21));
  pcVar23 = (code *)swi(3);
  pSVar9 = (String *)
           (*pcVar23)(CONCAT22(uVar1,in_ES),CONCAT22(uVar3,in_ES),CONCAT22(uVar5,in_ES),
                     CONCAT22(uVar7,in_ES),(int)((ulonglong)uVar11 >> 0x20));
  return pSVar9;
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
  (this->fields)._.timeSinceStart = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    args.m_Index = (int32_t)(pMVar1->fields).playerContainer;
    uStack_2 = 6;
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_2);
    this_02 = data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (((Object__Array *)args.m_Index != (Object__Array *)0x0) && (TVar4.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) {
code_?:
          func_?(TVar4.m_Index,TypeInfo__System__Int32);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0);
          func_?(uVar5);
          goto code_?;
        }
        piVar6 = (int32_t *)func_?(TVar4.m_Index);
        pOVar7 = (Object__Array *)
                  MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)args.m_Index,*piVar6,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          this_00 = (pMVar1->fields).playerContainer;
          uStack_8 = 7;
          pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_8);
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02
                             ,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((this_00 != (MVPlayerContainer *)0x0) && (TVar4.m_Index != 0)) {
            args.m_Index = (int32_t)pOVar7;
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            pMVar9 = MVPlayerContainer::MVPlayerContainer_get_Item
                                (this_00,*piVar6,(MethodInfo *)0x0);
            if ((((pMVar9 != (MVPlayer *)0x0) &&
                 (pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField,
                 pUVar10 != (UserProfileData *)0x0)) && (pOVar7 != (Object__Array *)0x0)) &&
               ((UserProfileData *)pOVar7->vector[0xb] != (UserProfileData *)0x0)) {
              bVar11 = mscorlib.dll::System::String::String_op_Equality
                                ((pUVar10->fields).UserName,
                                 (((UserProfileData *)pOVar7->vector[0xb])->fields).UserName,
                                 (MethodInfo *)0x0);
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(bVar11,data._0_3_);
              method_00 = (MethodInfo *)&UNK_?;
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_01 = (pMVar1->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
                pLVar12 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0);
                if (pLVar12 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  if ((pLVar12->fields)._size < 2) {
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar13 = Styles::Styles_GetColor
                                        ((Color *)&ppSStack_14,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                    fStack_15 = pCVar13->b;
                    fStack_16 = pCVar13->a;
                    pCVar13 = Styles::Styles_GetColor
                                        ((Color *)&ppSStack_14,ColorStyle__Enum_TeamNone,
                                         (MethodInfo *)0x0);
                  }
                  else {
                    team = (pMVar9->fields)._Team_k__BackingField;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar13 = Styles::Styles_GetTeamColor
                                        ((Color *)&ppSStack_14,team,0,(MethodInfo *)0x0);
                    fStack_15 = pCVar13->b;
                    fStack_16 = pCVar13->a;
                    pCVar13 = Styles::Styles_GetTeamColor
                                        ((Color *)&ppSStack_14,(MVTeam__Enum)pOVar7->vector[0xe],0,
                                         (MethodInfo *)0x0);
                  }
                  ppSStack_14 = (String **)pCVar13->r;
                  pTVar17 = (this->fields).Label;
                  bVar11 = data._3_1_;
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    ppSStack_14 = &::StringLiteral__;
                    func_?();
                    cRam_? = '\x01';
                  }
                  pBVar18 = TypeInfo__System__Byte;
                  this = (KillNotification *)CONCAT13(8,this._0_3_);
                  pOVar3 = (Object *)func_?();
                  args = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    this_02,pOVar3,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x13,data._0_3_);
                  fVar19 = (float)((int)&data + 3);
                  puVar20 = &UNK_?;
                  pBVar21 = TypeInfo__System__Byte;
                  pOVar3 = (Object *)func_?();
                  pSVar22 = (String *)
                            mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                            CollectionExtensions_GetValueOrDefault_5
                                      ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_02
                                       ,pOVar3,(Object *)::StringLiteral__,
                                       System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                      );
                  pSVar23 = (String *)0x0;
                  if (pSVar22 != (String *)0x0) {
                    if (pSVar22->klass == TypeInfo__System__String) {
                      pSVar23 = pSVar22;
                    }
                    pSVar24 = TypeInfo__System__String;
                    if (pSVar23 == (String *)0x0) goto code_?;
                  }
                  if (args.m_Index != 0) {
                    pPVar25 = TypeInfo__MV__Common__PlayerKilledByType;
                    if (*(Il2CppClass **)(*(int *)args.m_Index + 0x20) ==
                        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
                      pbVar26 = (byte *)func_?(args.m_Index);
                      pSVar23 = KillNotification_GetKillText_1
                                          ((uint)*pbVar26,bVar11,pSVar23,(MethodInfo *)0x0);
                      method_01 = TypeInfo__System__Object;
                      args.m_Index = func_?(TypeInfo__System__Object,4);
                      c.g = (float)((int)&this + 3);
                      c.r = (float)pBVar18;
                      c.b = fStack_15;
                      c.a = fStack_16;
                      CVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         (c,(MethodInfo *)0x0);
                      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Styles);
                      }
                      pSVar22 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar27 & 0xffffffff),
                                           (MethodInfo *)method_01);
                      if ((Object__Array *)args.m_Index == (Object__Array *)0x0)
                      goto code_?;
                      if (pSVar22 != (String *)0x0) {
                        iVar28 = func_?(pSVar22,(((Object__Array *)args.m_Index)->klass->_0
                                                         ).element_class);
                        if (iVar28 == 0) goto code_?;
                      }
                      if (((Object__Array *)args.m_Index)->max_length != 0) {
                        ((Object__Array *)args.m_Index)->vector[0] = (Object *)pSVar22;
                        func_?(((Object__Array *)args.m_Index)->vector,pSVar22);
                        pUVar10 = (pMVar9->fields)._UserProfileData_k__BackingField;
                        if (pUVar10 == (UserProfileData *)0x0) goto code_?;
                        pSVar22 = (pUVar10->fields).UserName;
                        if (pSVar22 != (String *)0x0) {
                          iVar28 = func_?(pSVar22,(((Object__Array *)args.m_Index)->klass->
                                                           _0).element_class);
                          if (iVar28 == 0) goto code_?;
                        }
                        if (1 < ((Object__Array *)args.m_Index)->max_length) {
                          ((Object__Array *)args.m_Index)->vector[1] = (Object *)pSVar22;
                          func_?(((Object__Array *)args.m_Index)->vector + 1,pSVar22);
                          c_00.g = (float)puVar20;
                          c_00.r = (float)ppSStack_14;
                          c_00.b = (float)pBVar21;
                          c_00.a = fVar19;
                          CVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                   Color32_op_Implicit(c_00,(MethodInfo *)0x0);
                          pSVar22 = Styles::Styles_ColorToHex
                                              ((Color32)((ulonglong)CVar27 & 0xffffffff),method_00);
                          if (pSVar22 != (String *)0x0) {
                            iVar28 = func_?(pSVar22,(((Object__Array *)args.m_Index)->klass
                                                             ->_0).element_class);
                            if (iVar28 == 0) goto code_?;
                          }
                          if (2 < ((Object__Array *)args.m_Index)->max_length) {
                            ((Object__Array *)args.m_Index)->vector[2] = (Object *)pSVar22;
                            func_?(((Object__Array *)args.m_Index)->vector + 2,pSVar22);
                            if ((UserProfileData *)pOVar7->vector[0xb] != (UserProfileData *)0x0) {
                              pSVar22 = (((UserProfileData *)pOVar7->vector[0xb])->fields).UserName
                              ;
                              if (pSVar22 != (String *)0x0) {
                                iVar28 = func_?(pSVar22,(((Object__Array *)args.m_Index)->
                                                                  klass->_0).element_class);
                                if (iVar28 == 0) goto code_?;
                              }
                              if (((Object__Array *)args.m_Index)->max_length < 4)
                              goto code_?;
                              ((Object__Array *)args.m_Index)->vector[3] = (Object *)pSVar22;
                              func_?(((Object__Array *)args.m_Index)->vector + 3,pSVar22);
                              pSVar23 = mscorlib.dll::System::String::String_Format_3
                                                  (pSVar23,(Object__Array *)args.m_Index,
                                                   (MethodInfo *)0x0);
                              if (pTVar17 != (Text *)0x0) {
                                (*(code *)(pTVar17->klass->vtable).set_text.method)
                                          (pTVar17,pSVar23,
                                           (pTVar17->klass->vtable).CalculateLayoutInputHorizontal_1.
                                           methodPtr);
                                return;
                              }
                            }
                            goto code_?;
                          }
                        }
                      }
code_?:
                      func_?();
                      pPVar25 = extraout_ECX;
                    }
                    func_?(args.m_Index,pPVar25);
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
  pSVar22 = (String *)func_?();
  pSVar24 = extraout_ECX_00;
code_?:
  func_?(pSVar22,pSVar24);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

