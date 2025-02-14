
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
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__got_caug);
    func_?(&StringLiteral__color___0___1___color__was_crus);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__shot_him);
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
  cVar1 = '\0';
  if (weaponName != (String *)0x0) {
    if (0x1e < (weaponName->fields)._stringLength) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1(weaponName,0,0x1b,(MethodInfo *)0x0)
      ;
      weaponName = mscorlib.dll::System::String::String_Concat_3
                             (pSVar2,::StringLiteral____,(MethodInfo *)0x0);
    }
    switch(type & 0xff) {
    case PlayerKilledByType__Enum_None:
      pSVar2 = TM::TM__(StringLiteral_None,(MethodInfo *)0x0);
      return pSVar2;
    default:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_BazookaGun:
      if (shotSelf == 0) {
        pSVar2 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
        return pSVar2;
      }
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__shot_him,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_RailGun:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__sniped__,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Suicide:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__respawne,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Impact:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__hit_the_,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Environmental:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__was_kill,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_MeleeWeapon:
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_a_melee_weapon_;
      break;
    case PlayerKilledByType__Enum_Explosive:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__blew_up_,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Fire:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__was_burn,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_FallOffWorld:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__fell_off,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Mutant:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Shotgun:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_FlameThrower:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__incinera,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Crushed:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__was_crus,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_Ghost:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__got_caug,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_AdvancedGhost:
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__was_elim,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_RayHealGun:
      pSVar2 = TM::TM__(StringLiteral__color___2___3___color__leeched_,(MethodInfo *)0x0);
      return pSVar2;
    case PlayerKilledByType__Enum_CustomGun:
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_a_custom_gun_;
    }
    if (bVar3 == 0) {
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (weaponName,::StringLiteral__,(MethodInfo *)0x0);
    }
    str0 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  uVar4 = func_?();
  pcVar5 = (char *)((ulonglong)uVar4 >> 0x20);
  bVar6 = (char)uVar4 + *unaff_EDI + cVar1;
  unaff_EDI[0x11] = unaff_EDI[0x11] | bVar6;
  uVar7 = CONCAT31((int3)((ulonglong)uVar4 >> 8),bVar6) & 0x4f104707;
  pbVar8 = (byte *)(pcVar5 + 7);
  bVar6 = *pbVar8;
  bVar9 = (byte)(uVar7 >> 8);
  *pbVar8 = *pbVar8 + bVar9;
  bVar10 = (byte)((ulonglong)uVar4 >> 0x28);
  bVar11 = CARRY1(unaff_retaddr,bVar10) || CARRY1(unaff_retaddr + bVar10,CARRY1(bVar6,bVar9));
  pbVar8 = (byte *)(uVar7 + 0x9b104707);
  bVar6 = *pbVar8;
  bVar12 = (byte)extraout_ECX;
  bVar9 = *pbVar8;
  *pbVar8 = bVar9 + bVar12 + bVar11;
  bVar13 = (byte)(extraout_ECX >> 8);
  *pcVar5 = *pcVar5 + (byte)uVar7 +
             (CARRY1(unaff_BH,bVar13) ||
             CARRY1(unaff_BH + bVar13,CARRY1(bVar6,bVar12) || CARRY1(bVar9 + bVar12,bVar11)));
  unaff_EDI[0x16] = unaff_EDI[0x16] | (byte)uVar7;
  puVar14 = (uint *)(uVar7 + 0x28104708);
  bVar13 = (byte)puVar14;
  unaff_EDI[0x16] = unaff_EDI[0x16] | bVar13;
  bVar11 = CARRY1(bRam_?,bVar12) || CARRY1(bRam_? + bVar12,extraout_ECX < *puVar14);
  bRam_? = bRam_? + bVar12 + (extraout_ECX < *puVar14);
  pbVar8 = (byte *)(extraout_ECX + 8);
  bVar9 = (byte)((uint)puVar14 >> 8);
  bVar6 = *pbVar8 + bVar9;
  bVar15 = CARRY1(*pbVar8,bVar9) || CARRY1(bVar6,bVar11);
  *pbVar8 = bVar6 + bVar11;
  pbVar8 = (byte *)(uVar7 + 0x2810474f + extraout_ECX);
  bVar6 = *pbVar8;
  bVar9 = *pbVar8;
  *pbVar8 = bVar9 + bVar10 + bVar15;
  unaff_EDI[-0x2cefb8ef] =
       unaff_EDI[-0x2cefb8ef] + bVar13 + (CARRY1(bVar6,bVar10) || CARRY1(bVar9 + bVar10,bVar15));
  unaff_EDI[0x19] = unaff_EDI[0x19] | bVar13;
  *puVar14 = *puVar14 >> (bVar12 & 0x1f) | *puVar14 << 0x20 - (bVar12 & 0x1f);
  unaff_EDI[0x1a] = unaff_EDI[0x1a] | bVar13;
  *puVar14 = *puVar14 >> (bVar12 & 0x1f) | *puVar14 << 0x20 - (bVar12 & 0x1f);
  unaff_EDI[0x1b] = unaff_EDI[0x1b] | bVar13;
  func_?();
  pcVar16 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar16)();
  return pSVar2;
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

