
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
  bVar1 = 0;
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
      pSVar2 = TM::TM__(StringLiteral__color___0___1___color__shot_the,(MethodInfo *)0x0);
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
  uVar4 = 0x1047;
  uVar5 = func_?();
  pbVar6 = (byte *)uVar5;
  bVar7 = (byte)((ulonglong)uVar5 >> 0x20);
  bVar8 = bVar7 + *pbVar6;
  bVar9 = CARRY1(bVar7,*pbVar6) || CARRY1(bVar8,bVar1);
  uVar10 = (undefined3)((ulonglong)uVar5 >> 0x28);
  bVar8 = bVar8 + bVar1;
  bVar11 = unaff_BL + bVar8 + bVar9;
  *(int *)(unaff_EDI + 0x11) =
       (int)(pbVar6 + (uint)(CARRY1(unaff_BL,bVar8) || CARRY1(unaff_BL + bVar8,bVar9)) +
                      *(int *)(unaff_EDI + 0x11));
  uVar12 = (uint)pbVar6 & 0x4f104710;
  pbVar6 = (byte *)(unaff_EDI + 0x11);
  bVar1 = *pbVar6;
  bVar13 = (byte)uVar12;
  *pbVar6 = *pbVar6 + bVar13;
  bVar14 = (byte)((ulonglong)uVar5 >> 0x28);
  bVar9 = CARRY1(bVar14,CARRY1(bVar1,bVar13));
  pbVar6 = (byte *)(uVar12 + 0x9b104710);
  bVar15 = (byte)extraout_ECX;
  bVar16 = CARRY1(*pbVar6,bVar15) || CARRY1(*pbVar6 + bVar15,bVar9);
  *pbVar6 = *pbVar6 + bVar15 + bVar9;
  pbVar6 = (byte *)(unaff_EDI + 0x13);
  bVar1 = *pbVar6;
  bVar7 = *pbVar6;
  *pbVar6 = bVar7 + bVar13 + bVar16;
  out((short)CONCAT31(uVar10,bVar8),uVar12);
  *(char *)(unaff_EDI + 0x13) =
       *(char *)(unaff_EDI + 0x13) + bVar13 +
       (CARRY1(bVar1,bVar13) || CARRY1(bVar7 + bVar13,bVar16));
  bVar9 = CARRY1(bVar8,(byte)*extraout_ECX);
  bVar8 = bVar8 + (char)*extraout_ECX;
  uVar17 = CONCAT31(uVar10,bVar8);
  bVar16 = CARRY1(bRam_?,bVar8);
  bVar1 = bRam_? + bVar8;
  bRam_? = bVar1 + bVar9;
  *(int *)(unaff_EDI + 0x14) =
       *(int *)(unaff_EDI + 0x14) + uVar12 + (uint)(bVar16 || CARRY1(bVar1,bVar9));
  bVar9 = CARRY1(bRam_?,bVar15) || CARRY1(bRam_? + bVar15,uVar17 < *extraout_ECX);
  bRam_? = bRam_? + bVar15 + (uVar17 < *extraout_ECX);
  pbVar6 = (byte *)((int)extraout_ECX + 0x11);
  bVar7 = (byte)(uVar12 >> 8);
  bVar1 = *pbVar6 + bVar7;
  bVar16 = CARRY1(*pbVar6,bVar7) || CARRY1(bVar1,bVar9);
  *pbVar6 = bVar1 + bVar9;
  pbVar6 = (byte *)((int)extraout_ECX + uVar17 + 0x47);
  bVar9 = CARRY1(*pbVar6,bVar14) || CARRY1(*pbVar6 + bVar14,bVar16);
  *pbVar6 = *pbVar6 + bVar14 + bVar16;
  pbVar6 = (byte *)(unaff_EDI + -0x2cefb8e8);
  bVar7 = *pbVar6;
  bVar1 = *pbVar6;
  *pbVar6 = bVar1 + bVar13 + bVar9;
  puVar18 = (uint *)(unaff_EDI + 0x17);
  uVar17 = (uint)(CARRY1(bVar7,bVar13) || CARRY1(bVar1 + bVar13,bVar9));
  bVar16 = CARRY4(*puVar18,uVar12) || CARRY4(*puVar18 + uVar12,uVar17);
  *puVar18 = *puVar18 + uVar12 + uVar17;
  uVar19 = CONCAT14(bVar16,*extraout_ECX);
  uVar20 = (ulonglong)uVar19 << (bVar15 & 0x1f) | (ulonglong)(uVar19 >> 0x21 - (bVar15 & 0x1f));
  *extraout_ECX = (uint)uVar20;
  bVar9 = ((uint)extraout_ECX & 0x1f) == 0;
  bVar13 = bVar9 * bVar16 | !bVar9 * ((uVar20 & 0x100000000) != 0);
  bVar1 = bVar11 + bVar8;
  bVar7 = bVar1 + bVar13;
  puVar18 = (uint *)(unaff_EDI + 0x18);
  uVar17 = (uint)(CARRY1(bVar11,bVar8) || CARRY1(bVar1,bVar13));
  bVar16 = CARRY4(*puVar18,uVar12) || CARRY4(*puVar18 + uVar12,uVar17);
  *puVar18 = *puVar18 + uVar12 + uVar17;
  uVar19 = CONCAT14(bVar16,*extraout_ECX);
  uVar20 = (ulonglong)uVar19 << (bVar15 & 0x1f) | (ulonglong)(uVar19 >> 0x21 - (bVar15 & 0x1f));
  *extraout_ECX = (uint)uVar20;
  bVar9 = ((uint)extraout_ECX & 0x1f) == 0;
  *(int *)(unaff_EDI + 0x19) =
       *(int *)(unaff_EDI + 0x19) + uVar12 +
       (uint)(CARRY1(bVar7,bVar8) ||
             CARRY1(bVar7 + bVar8,bVar9 * bVar16 | !bVar9 * ((uVar20 & 0x100000000) != 0)));
  func_?(CONCAT22(uVar4,in_CS));
  pcVar21 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar21)();
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
  n = this;
  (this->fields)._.timeSinceStart = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    this = (KillNotification *)CONCAT13(6,this._0_3_);
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    args.m_Index = (int32_t)data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                          pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((pMVar2 != (MVPlayerContainer *)0x0) && (TVar4.m_Index != 0)) {
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
        pMStack_7 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar2,*piVar6,(MethodInfo *)0x0)
        ;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = (pMVar1->fields).playerContainer;
          uStack_8 = 7;
          pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_8);
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (args.m_Index,pOVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((pMVar2 != (MVPlayerContainer *)0x0) && (TVar4.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            pMVar9 = MVPlayerContainer::MVPlayerContainer_get_Item
                                (pMVar2,*piVar6,(MethodInfo *)0x0);
            pMStack_10 = pMVar9;
            if ((((pMVar9 != (MVPlayer *)0x0) &&
                 (pUVar11 = (pMVar9->fields)._UserProfileData_k__BackingField,
                 pUVar11 != (UserProfileData *)0x0)) && (pMStack_7 != (MVPlayer *)0x0)) &&
               (pUVar12 = (pMStack_7->fields)._UserProfileData_k__BackingField,
               pUVar12 != (UserProfileData *)0x0)) {
              bVar13 = mscorlib.dll::System::String::String_op_Equality
                                ((pUVar11->fields).UserName,(pUVar12->fields).UserName,
                                 (MethodInfo *)0x0);
              _bStack_14 = CONCAT31(uStack_14,bVar13);
              method_00 = (MethodInfo *)&UNK_?;
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
                pLVar15 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
                if (pLVar15 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  if ((pLVar15->fields)._size < 2) {
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar16 = Styles::Styles_GetColor
                                        (&CStack_17,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)0x7;
                    fStack_18 = pCVar16->r;
                    fStack_19 = pCVar16->g;
                    fStack_20 = pCVar16->b;
                    fStack_21 = pCVar16->a;
                    pCVar16 = Styles::Styles_GetColor
                                        (&CStack_17,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
                    CStack_17.r = pCVar16->r;
                    CStack_17.g = pCVar16->g;
                    CStack_17.b = pCVar16->b;
                    CStack_17.a = pCVar16->a;
code_?:
                    pTStack_22 = (n->fields).Label;
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
                    uStack_23 = 8;
                    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_23);
                    args = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     (args.m_Index,pOVar3,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                    uStack_24 = 0x13;
                    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_24);
                    pSVar25 = (String *)
                              mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                              CollectionExtensions_GetValueOrDefault_5
                                        ((IReadOnlyDictionary_2_System_Object_System_Object_ *)data,
                                         pOVar3,(Object *)::StringLiteral__,
                                         System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                        );
                    pSVar26 = (String *)0x0;
                    if (pSVar25 != (String *)0x0) {
                      if (pSVar25->klass == TypeInfo__System__String) {
                        pSVar26 = pSVar25;
                      }
                      pSVar27 = TypeInfo__System__String;
                      if (pSVar26 == (String *)0x0) goto code_?;
                    }
                    if (args.m_Index != 0) {
                      pPVar28 = TypeInfo__MV__Common__PlayerKilledByType;
                      if (*(Il2CppClass **)(*(int *)args.m_Index + 0x20) ==
                          (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
                        pbVar29 = (byte *)func_?(args.m_Index);
                        data = (Dictionary_2_System_Object_System_Object_ *)
                               KillNotification_GetKillText_1
                                         ((uint)*pbVar29,(bool)_bStack_14,pSVar26,(MethodInfo *)0x0)
                        ;
                        method_01 = TypeInfo__System__Object;
                        args.m_Index = func_?(TypeInfo__System__Object,4);
                        c.g = fStack_19;
                        c.r = fStack_18;
                        c.b = fStack_20;
                        c.a = fStack_21;
                        CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                 Color32_op_Implicit(c,(MethodInfo *)0x0);
                        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Styles);
                        }
                        pSVar26 = Styles::Styles_ColorToHex
                                            ((Color32)((ulonglong)CVar30 & 0xffffffff),
                                             (MethodInfo *)method_01);
                        if ((Object__Array *)args.m_Index == (Object__Array *)0x0)
                        goto code_?;
                        if (pSVar26 != (String *)0x0) {
                          iVar31 = func_?(pSVar26,(((Object__Array *)args.m_Index)->klass->
                                                           _0).element_class);
                          if (iVar31 == 0) goto code_?;
                        }
                        if (((Object__Array *)args.m_Index)->max_length != 0) {
                          ((Object__Array *)args.m_Index)->vector[0] = (Object *)pSVar26;
                          func_?(((Object__Array *)args.m_Index)->vector,pSVar26);
                          pUVar11 = (pMStack_10->fields)._UserProfileData_k__BackingField;
                          if (pUVar11 == (UserProfileData *)0x0) goto code_?;
                          pSVar26 = (pUVar11->fields).UserName;
                          if (pSVar26 != (String *)0x0) {
                            iVar31 = func_?(pSVar26,(((Object__Array *)args.m_Index)->klass
                                                             ->_0).element_class);
                            if (iVar31 == 0) goto code_?;
                          }
                          if (1 < ((Object__Array *)args.m_Index)->max_length) {
                            ((Object__Array *)args.m_Index)->vector[1] = (Object *)pSVar26;
                            func_?(((Object__Array *)args.m_Index)->vector + 1,pSVar26);
                            c_00.g = CStack_17.g;
                            c_00.r = CStack_17.r;
                            c_00.b = CStack_17.b;
                            c_00.a = CStack_17.a;
                            CVar30 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                     Color32_op_Implicit(c_00,(MethodInfo *)0x0);
                            pSVar26 = Styles::Styles_ColorToHex
                                                ((Color32)((ulonglong)CVar30 & 0xffffffff),method_00
                                                );
                            if (pSVar26 != (String *)0x0) {
                              iVar31 = func_?(pSVar26,(((Object__Array *)args.m_Index)->
                                                                klass->_0).element_class);
                              if (iVar31 == 0) goto code_?;
                            }
                            if (2 < ((Object__Array *)args.m_Index)->max_length) {
                              ((Object__Array *)args.m_Index)->vector[2] = (Object *)pSVar26;
                              func_?(((Object__Array *)args.m_Index)->vector + 2,pSVar26);
                              pUVar11 = (pMStack_7->fields)._UserProfileData_k__BackingField;
                              if (pUVar11 != (UserProfileData *)0x0) {
                                pSVar26 = (pUVar11->fields).UserName;
                                if (pSVar26 != (String *)0x0) {
                                  iVar31 = func_?(pSVar26,(((Object__Array *)args.m_Index)
                                                                    ->klass->_0).element_class);
                                  if (iVar31 == 0) goto code_?;
                                }
                                if (((Object__Array *)args.m_Index)->max_length < 4)
                                goto code_?;
                                ((Object__Array *)args.m_Index)->vector[3] = (Object *)pSVar26;
                                func_?(((Object__Array *)args.m_Index)->vector + 3,pSVar26)
                                ;
                                pSVar26 = mscorlib.dll::System::String::String_Format_3
                                                    ((String *)data,(Object__Array *)args.m_Index,
                                                     (MethodInfo *)0x0);
                                if (pTStack_22 != (Text *)0x0) {
                                  (*(code *)(pTStack_22->klass->vtable).set_text.method)
                                            (pTStack_22,pSVar26,
                                             (pTStack_22->klass->vtable).
                                             CalculateLayoutInputHorizontal_1.methodPtr);
                                  this_01 = (n->fields).tertiaryNotificationUI;
                                  l = (*(code *)(n->klass->vtable).get_Lifetime.method)
                                                (n,(n->klass->vtable).Initialize.methodPtr);
                                  if (this_01 != (TertiaryNotificationUI *)0x0) {
                                    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                                              (this_01,(Notification *)n,l,0,(MethodInfo *)0x0);
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
                        pPVar28 = extraout_ECX;
                      }
                      func_?(args.m_Index,pPVar28);
                    }
                  }
                  else {
                    pTStack_22 = (Text *)(pMVar9->fields)._Team_k__BackingField;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar16 = Styles::Styles_GetTeamColor
                                        (&CStack_17,(MVTeam__Enum)pTStack_22,0,(MethodInfo *)0x0);
                    fStack_18 = pCVar16->r;
                    fStack_19 = pCVar16->g;
                    fStack_20 = pCVar16->b;
                    fStack_21 = pCVar16->a;
                    pCVar16 = Styles::Styles_GetTeamColor
                                        (&CStack_17,(pMStack_7->fields)._Team_k__BackingField,0,
                                         (MethodInfo *)0x0);
                    CStack_17.r = pCVar16->r;
                    CStack_17.g = pCVar16->g;
                    CStack_17.b = pCVar16->b;
                    CStack_17.a = pCVar16->a;
                    pMVar32 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                        ((MethodInfo *)0x0);
                    fVar33 = _UNK_?;
                    fVar34 = _UNK_?;
                    fVar35 = _UNK_?;
                    fVar36 = _UNK_?;
                    fVar37 = _UNK_?;
                    fVar38 = _UNK_?;
                    if (pMVar32 != (MVLocalPlayer *)0x0) {
                      pEVar39 = (n->fields).Background;
                      if ((pMVar32->fields)._._Team_k__BackingField ==
                          (pMVar9->fields)._Team_k__BackingField) {
                        if (pEVar39 != (EnhancedGradientEffect *)0x0) {
                          (pEVar39->fields).top.r = _UNK_?;
                          (pEVar39->fields).top.g = fVar38;
                          (pEVar39->fields).top.b = fVar37;
                          (pEVar39->fields).top.a = fVar36;
                          fVar38 = _UNK_?;
                          fVar37 = _UNK_?;
                          fVar36 = _UNK_?;
                          fVar35 = _UNK_?;
                          goto code_?;
                        }
                      }
                      else if (pEVar39 != (EnhancedGradientEffect *)0x0) {
                        (pEVar39->fields).top.r = _UNK_?;
                        (pEVar39->fields).top.g = fVar35;
                        (pEVar39->fields).top.b = fVar34;
                        (pEVar39->fields).top.a = fVar33;
                        fVar38 = _UNK_?;
                        fVar37 = _UNK_?;
                        fVar36 = _UNK_?;
                        fVar35 = _UNK_?;
code_?:
                        pEVar39 = (n->fields).Background;
                        if (pEVar39 != (EnhancedGradientEffect *)0x0) {
                          (pEVar39->fields).bottom.r = fVar38;
                          (pEVar39->fields).bottom.g = fVar37;
                          (pEVar39->fields).bottom.b = fVar36;
                          (pEVar39->fields).bottom.a = fVar35;
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
  pSVar25 = (String *)func_?();
  pSVar27 = extraout_ECX_00;
code_?:
  func_?(pSVar25,pSVar27);
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}

