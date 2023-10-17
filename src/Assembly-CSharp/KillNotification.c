
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
  pOVar1 = (Object *)
           func_?(TypeInfo__System__Byte,&stack0xfffffffb,CONCAT13(8,(int3)in_ECX));
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class ==
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
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar5,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar5);
    if ((pMVar3 == (MVPlayerContainer *)0x0) || (pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar5);
    pMVar8 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar3,*piVar7,(MethodInfo *)0x0);
    pMStack_9 = pMVar8;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = (pMVar1->fields).playerContainer;
    uStack_10 = 7;
    pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&uStack_10);
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)method_00,pOVar5,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar5);
    if ((pMVar3 == (MVPlayerContainer *)0x0) || (pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar5);
    pMVar11 = MVPlayerContainer::MVPlayerContainer_get_Item(pMVar3,*piVar7,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)((uint)data & 0xffffff);
    if ((((pMVar11 == (MVPlayer *)0x0) ||
         (pUVar12 = (pMVar11->fields)._UserProfileData_k__BackingField,
         pUVar12 == (UserProfileData *)0x0)) || (pMVar8 == (MVPlayer *)0x0)) ||
       (pUVar13 = (pMVar8->fields)._UserProfileData_k__BackingField, pUVar13 == (UserProfileData *)0x0
       )) goto code_?;
    bVar14 = mscorlib.dll::System::String::String_op_Equality
                      ((pUVar12->fields).UserName,(pUVar13->fields).UserName,(MethodInfo *)0x0);
    uVar15 = data._3_1_;
    if (bVar14 != 0) {
      uVar15 = 1;
    }
    _uStack_a = CONCAT31(uStack_16,uVar15);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
    goto code_?;
    pLVar17 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar17 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    if ((pLVar17->fields)._size < 2) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar18 = Styles::Styles_GetColor(&CStack_19,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
      pBStack_20 = (Byte__Class *)pCVar18->r;
      ppBStack_21 = (Byte__Class **)pCVar18->g;
      fStack_22 = pCVar18->b;
      fStack_23 = pCVar18->a;
      pCVar18 = Styles::Styles_GetColor(&CStack_19,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)(pMVar11->fields)._Team_k__BackingField;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pCVar18 = Styles::Styles_GetTeamColor(&CStack_19,(MVTeam__Enum)data,0,(MethodInfo *)0x0);
      pBStack_20 = (Byte__Class *)pCVar18->r;
      ppBStack_21 = (Byte__Class **)pCVar18->g;
      fStack_22 = pCVar18->b;
      fStack_23 = pCVar18->a;
      pCVar18 = Styles::Styles_GetTeamColor
                          (&CStack_19,(pMVar8->fields)._Team_k__BackingField,0,(MethodInfo *)0x0);
    }
    CStack_19.r = pCVar18->r;
    CStack_19.g = pCVar18->g;
    CStack_19.b = pCVar18->b;
    CStack_19.a = pCVar18->a;
    pTStack_24 = (this->fields).Label;
    if (cRam_? == '\0') {
      ppBStack_21 = &TypeInfo__System__Byte;
      func_?();
      pBStack_20 = (Byte__Class *)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      CStack_19.a = (float)&UNK_?;
      func_?();
      CStack_19.a = (float)&TypeInfo__MV__Common__PlayerKilledByType;
      CStack_19.b = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    ppBStack_21 = (Byte__Class **)((int)&this + 3);
    this = (KillNotification *)CONCAT13(8,this._0_3_);
    pBStack_20 = TypeInfo__System__Byte;
    CStack_19.a = (float)&UNK_?;
    pOVar5 = (Object *)func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)method_00,pOVar5,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__MV__Common__PlayerKilledByType,pOVar5);
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class !=
        (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) goto code_?;
    pbVar25 = (byte *)func_?(pOVar5);
    data = (Dictionary_2_System_Object_System_Object_ *)
           KillNotification_GetKillText_1((uint)*pbVar25,(bool)_uStack_a,(MethodInfo *)0x0);
    method_01 = TypeInfo__System__Object;
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    c.g = (float)ppBStack_21;
    c.r = (float)pBStack_20;
    c.b = fStack_22;
    c.a = fStack_23;
    CVar26 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pSVar27 = Styles::Styles_ColorToHex
                        ((Color32)((ulonglong)CVar26 & 0xffffffff),(MethodInfo *)method_01);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pSVar27 != (String *)0x0) {
      iVar28 = func_?(pSVar27,(args->klass->_0).element_class);
      if (iVar28 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length != 0) {
      args->vector[0] = (Object *)pSVar27;
      func_?(args->vector,pSVar27);
      pUVar12 = (pMVar11->fields)._UserProfileData_k__BackingField;
      if (pUVar12 == (UserProfileData *)0x0) goto code_?;
      pSVar27 = (pUVar12->fields).UserName;
      if (pSVar27 != (String *)0x0) {
        iVar28 = func_?(pSVar27,(args->klass->_0).element_class);
        if (iVar28 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (args->max_length < 2) goto code_?;
      args->vector[1] = (Object *)pSVar27;
      func_?(args->vector + 1,pSVar27);
      c_00.g = CStack_19.g;
      c_00.r = CStack_19.r;
      c_00.b = CStack_19.b;
      c_00.a = CStack_19.a;
      CVar26 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c_00,(MethodInfo *)0x0);
      pSVar27 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar26 & 0xffffffff),method_00);
      if (pSVar27 != (String *)0x0) {
        iVar28 = func_?(pSVar27,(args->klass->_0).element_class);
        if (iVar28 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (args->max_length < 3) goto code_?;
      args->vector[2] = (Object *)pSVar27;
      func_?(args->vector + 2,pSVar27);
      pUVar12 = (pMStack_9->fields)._UserProfileData_k__BackingField;
      if (pUVar12 == (UserProfileData *)0x0) goto code_?;
      pSVar27 = (pUVar12->fields).UserName;
      if (pSVar27 == (String *)0x0) {
code_?:
        if (3 < args->max_length) {
          args->vector[3] = (Object *)pSVar27;
          func_?(args->vector + 3,pSVar27);
          pSVar27 = mscorlib.dll::System::String::String_Format_3
                              ((String *)data,args,(MethodInfo *)0x0);
          if (pTStack_24 != (Text *)0x0) {
            (*(pTStack_24->klass->vtable).set_text.methodPtr)
                      (pTStack_24,pSVar27,(pTStack_24->klass->vtable).set_text.method);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      iVar28 = func_?(pSVar27,(args->klass->_0).element_class);
      if (iVar28 != 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

