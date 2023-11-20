
/* String GetKillText(Dictionary`2[System.Object,System.Object], Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText
                   (Dictionary_2_System_Object_System_Object_ *data,bool shotSelf,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,CONCAT13(8,(int3)in_ECX));
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
        pbVar2 = (byte *)func_?();
        pSVar3 = KillNotification_GetKillText_1((uint)*pbVar2,shotSelf,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String GetKillText(PlayerKilledByType, Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText_1
                   (PlayerKilledByType__Enum type,bool shotSelf,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__was_elim);
    func_?(&StringLiteral__color___0___1___color__was_kill);
    func_?(&StringLiteral__color___0___1___color__blew_up_);
    func_?(&StringLiteral__color___0___1___color__was_burn);
    func_?(&StringLiteral_None);
    func_?(&StringLiteral__color___0___1___color__fell_off);
    func_?(&StringLiteral__color___2___3___color__incinera);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___2___3___color__leeched_);
    func_?(&StringLiteral__color___0___1___color__got_caug);
    func_?(&StringLiteral__color___0___1___color__was_crus);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___0___1___color__shot_him);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    func_?(&StringLiteral__color___2___3___color__sniped__);
    func_?(&StringLiteral__color___0___1___color__respawne);
    func_?(&StringLiteral__color___0___1___color__hit_the_);
    func_?(&StringLiteral__color___2___3___color__eliminat);
    cRam_? = '\x01';
  }
  switch(type & 0xff) {
  case PlayerKilledByType__Enum_None:
    pSVar1 = TM::TM__(StringLiteral_None,(MethodInfo *)0x0);
    return pSVar1;
  default:
    pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    return pSVar1;
  case PlayerKilledByType__Enum_BazookaGun:
    break;
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
    pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    return pSVar1;
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
  }
  if (shotSelf == 0) {
    pSVar1 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = TM::TM__(StringLiteral__color___0___1___color__shot_him,(MethodInfo *)0x0);
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
  (this->fields)._.timeSinceStart = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    pMVar3 = (pMVar1->fields).playerContainer;
    uStack_4 = 6;
    pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&uStack_4);
    method_00 = (MethodInfo *)data;
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
    if ((pMVar3 == (MVPlayerContainer *)0x0) || (TVar6.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar8 = (int32_t *)func_?(TVar6.m_Index);
    pMVar9 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar3,*piVar8,(MethodInfo *)0x0);
    pMStack_10 = pMVar9;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = (pMVar1->fields).playerContainer;
    uStack_11 = 7;
    pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&uStack_11);
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)method_00,
                       pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
    if ((pMVar3 == (MVPlayerContainer *)0x0) || (TVar6.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar8 = (int32_t *)func_?(TVar6.m_Index);
    pMVar12 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar3,*piVar8,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)((uint)data & 0xffffff);
    if ((((pMVar12 == (MVPlayer *)0x0) ||
         (pUVar13 = (pMVar12->fields)._UserProfileData_k__BackingField,
         pUVar13 == (UserProfileData *)0x0)) || (pMVar9 == (MVPlayer *)0x0)) ||
       (pUVar14 = (pMVar9->fields)._UserProfileData_k__BackingField,
       pUVar14 == (UserProfileData *)0x0)) goto code_?;
    bVar15 = mscorlib.dll::System::String::String_op_Equality
                      ((pUVar13->fields).UserName,(pUVar14->fields).UserName,(MethodInfo *)0x0);
    uVar16 = data._3_1_;
    if (bVar15 != 0) {
      uVar16 = 1;
    }
    _uStack_a = CONCAT31(uStack_17,uVar16);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
    goto code_?;
    pLVar18 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar18 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    if ((pLVar18->fields)._size < 2) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar19 = Styles::Styles_GetColor(&CStack_20,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
      pBStack_21 = (Byte__Class *)pCVar19->r;
      ppBStack_22 = (Byte__Class **)pCVar19->g;
      fStack_23 = pCVar19->b;
      fStack_24 = pCVar19->a;
      pCVar19 = Styles::Styles_GetColor(&CStack_20,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)(pMVar12->fields)._Team_k__BackingField;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar19 = Styles::Styles_GetTeamColor(&CStack_20,(MVTeam__Enum)data,0,(MethodInfo *)0x0);
      pBStack_21 = (Byte__Class *)pCVar19->r;
      ppBStack_22 = (Byte__Class **)pCVar19->g;
      fStack_23 = pCVar19->b;
      fStack_24 = pCVar19->a;
      pCVar19 = Styles::Styles_GetTeamColor
                          (&CStack_20,(pMVar9->fields)._Team_k__BackingField,0,(MethodInfo *)0x0);
    }
    CStack_20.r = pCVar19->r;
    CStack_20.g = pCVar19->g;
    CStack_20.b = pCVar19->b;
    CStack_20.a = pCVar19->a;
    pTStack_25 = (this->fields).Label;
    if (cRam_? == '\0') {
      ppBStack_22 = &TypeInfo__System__Byte;
      func_?();
      pBStack_21 = (Byte__Class *)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      CStack_20.a = (float)&UNK_?;
      func_?();
      CStack_20.a = (float)&TypeInfo__MV__Common__PlayerKilledByType;
      CStack_20.b = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    ppBStack_22 = (Byte__Class **)((int)&this + 3);
    this = (KillNotification *)CONCAT13(8,this._0_3_);
    pBStack_21 = TypeInfo__System__Byte;
    CStack_20.a = (float)&UNK_?;
    pOVar5 = (Object *)func_?();
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)method_00,
                       pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__MV__Common__PlayerKilledByType,TVar6.m_Index);
    if (TVar6.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) goto code_?;
    pbVar26 = (byte *)func_?(TVar6.m_Index);
    data = (Dictionary_2_System_Object_System_Object_ *)
           KillNotification_GetKillText_1((uint)*pbVar26,(bool)_uStack_a,(MethodInfo *)0x0);
    method_01 = TypeInfo__System__Object;
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    c.g = (float)ppBStack_22;
    c.r = (float)pBStack_21;
    c.b = fStack_23;
    c.a = fStack_24;
    CVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pSVar28 = Styles::Styles_ColorToHex
                        ((Color32)((ulonglong)CVar27 & 0xffffffff),(MethodInfo *)method_01);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pSVar28 != (String *)0x0) {
      iVar29 = func_?(pSVar28,(args->klass->_0).element_class);
      if (iVar29 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length != 0) {
      args->vector[0] = (Object *)pSVar28;
      func_?(args->vector,pSVar28);
      pUVar13 = (pMVar12->fields)._UserProfileData_k__BackingField;
      if (pUVar13 == (UserProfileData *)0x0) goto code_?;
      pSVar28 = (pUVar13->fields).UserName;
      if (pSVar28 != (String *)0x0) {
        iVar29 = func_?(pSVar28,(args->klass->_0).element_class);
        if (iVar29 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (args->max_length < 2) goto code_?;
      args->vector[1] = (Object *)pSVar28;
      func_?(args->vector + 1,pSVar28);
      c_00.g = CStack_20.g;
      c_00.r = CStack_20.r;
      c_00.b = CStack_20.b;
      c_00.a = CStack_20.a;
      CVar27 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c_00,(MethodInfo *)0x0);
      pSVar28 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar27 & 0xffffffff),method_00);
      if (pSVar28 != (String *)0x0) {
        iVar29 = func_?(pSVar28,(args->klass->_0).element_class);
        if (iVar29 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (args->max_length < 3) goto code_?;
      args->vector[2] = (Object *)pSVar28;
      func_?(args->vector + 2,pSVar28);
      pUVar13 = (pMStack_10->fields)._UserProfileData_k__BackingField;
      if (pUVar13 == (UserProfileData *)0x0) goto code_?;
      pSVar28 = (pUVar13->fields).UserName;
      if (pSVar28 == (String *)0x0) {
code_?:
        if (3 < args->max_length) {
          args->vector[3] = (Object *)pSVar28;
          func_?(args->vector + 3,pSVar28);
          pSVar28 = mscorlib.dll::System::String::String_Format_3
                              ((String *)data,args,(MethodInfo *)0x0);
          if (pTStack_25 != (Text *)0x0) {
            (*(code *)(pTStack_25->klass->vtable).set_text.method)
                      (pTStack_25,pSVar28,
                       (pTStack_25->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      iVar29 = func_?(pSVar28,(args->klass->_0).element_class);
      if (iVar29 != 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}

