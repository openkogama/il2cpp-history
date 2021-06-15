
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* String GetKillText(Dictionary`2[System.Object,System.Object], Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText
                   (Dictionary_2_System_Object_System_Object_ *data,bool shotSelf,MethodInfo *method
                   )

{
  pcVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb,CONCAT13(8,(int3)in_ECX));
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar2 == (Pool *)0x0)) {
    pPVar2 = (Pool *)func_?();
  }
  else if ((pPVar2->klass->_0).element_class ==
           (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
    puVar3 = (undefined1 *)func_?();
    uVar4 = *puVar3;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    switch(uVar4) {
    case 0:
      pSVar5 = TM::TM__(StringLiteral_None,(MethodInfo *)0x0);
      return pSVar5;
    default:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar5;
    case 2:
      goto code_?;
    case 3:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__sniped__,(MethodInfo *)0x0);
      return pSVar5;
    case 4:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__respawne,(MethodInfo *)0x0);
      return pSVar5;
    case 5:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__hit_the_,(MethodInfo *)0x0);
      return pSVar5;
    case 6:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__was_kill,(MethodInfo *)0x0);
      return pSVar5;
    case 7:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar5;
    case 8:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__blew_up_,(MethodInfo *)0x0);
      return pSVar5;
    case 9:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__was_burn,(MethodInfo *)0x0);
      return pSVar5;
    case 10:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__fell_off,(MethodInfo *)0x0);
      return pSVar5;
    case 0xb:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar5;
    case 0xc:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
      return pSVar5;
    case 0xd:
      pSVar5 = TM::TM__(StringLiteral__color___2___3___color__incinera,(MethodInfo *)0x0);
      return pSVar5;
    case 0xe:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__was_crus,(MethodInfo *)0x0);
      return pSVar5;
    case 0xf:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__got_caug,(MethodInfo *)0x0);
      return pSVar5;
    case 0x10:
      pSVar5 = TM::TM__(StringLiteral__color___0___1___color__was_elim,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  func_?();
  bVar6 = 0;
  uVar7 = func_?();
  iVar8 = extraout_ECX_00;
  while( true ) {
    pbVar9 = (byte *)uVar7;
    bVar10 = (byte)((ulonglong)uVar7 >> 0x20);
    bVar11 = *pbVar9 < bVar10 || (byte)(*pbVar9 - bVar10) < bVar6;
    *pbVar9 = (*pbVar9 - bVar10) - bVar6;
    pcVar1 = pcVar1 + -1;
    out(0x18,pbVar9);
    pbVar12 = (byte *)(iVar8 + -0x19);
    bVar13 = (byte)((ulonglong)uVar7 >> 8);
    bVar6 = *pbVar12 + bVar13;
    bVar14 = CARRY1(*pbVar12,bVar13) || CARRY1(bVar6,bVar11);
    *pbVar12 = bVar6 + bVar11;
    bVar6 = *pbVar9 < bVar10 || (byte)(*pbVar9 - bVar10) < bVar14;
    *pbVar9 = (*pbVar9 - bVar10) - bVar14;
    if (*pbVar9 == 0) break;
    iVar8 = in((short)((ulonglong)uVar7 >> 0x20));
    (**(code **)(&UNK_? + iVar8))();
    uVar7 = func_?();
    iVar8 = extraout_ECX;
  }
  bVar13 = *pbVar9;
  bVar15 = *pbVar9;
  *pbVar9 = (bVar15 - bVar10) - bVar6;
  *pbVar9 = (*pbVar9 - bVar10) - (bVar13 < bVar10 || (byte)(bVar15 - bVar10) < bVar6);
  bVar11 = ((uint)pPVar2 & 1) != 0;
  out(0x18,pbVar9);
  pbVar12 = (byte *)(iVar8 + -0x3aefe719);
  bVar13 = (byte)((ulonglong)uVar7 >> 0x28);
  bVar6 = *pbVar12 + bVar13;
  bVar14 = CARRY1(*pbVar12,bVar13) || CARRY1(bVar6,bVar11);
  *pbVar12 = bVar6 + bVar11;
  out(0x18,pbVar9);
  bVar6 = (byte)iVar8 + unaff_BL;
  bVar11 = CARRY1((byte)iVar8,unaff_BL) || CARRY1(bVar6,bVar14);
  out(0x18,pbVar9);
  bVar13 = (byte)((uint)iVar8 >> 8);
  bVar16 = CARRY1(bVar13,bVar13) || CARRY1(bVar13 * '\x02',bVar11);
  pbVar12 = (byte *)CONCAT22((short)((uint)iVar8 >> 0x10),
                             CONCAT11(bVar13 * '\x02' + bVar11,bVar6 + bVar14));
  out(0x18,pbVar9);
  bVar6 = *pbVar12 + (byte)uVar7;
  cVar17 = CARRY1(*pbVar12,(byte)uVar7) || CARRY1(bVar6,bVar16);
  *pbVar12 = bVar6 + bVar16;
  pcVar18 = (char *)func_?();
  *pcVar18 = (*pcVar18 - extraout_DL) - cVar17;
  pcVar18[-(int)pcVar1] = (pcVar18[-(int)pcVar1] - extraout_DL) - (pcVar18 < pcVar1);
  func_?();
  pcVar19 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar19)();
  return pSVar5;
code_?:
  if (shotSelf == 0) {
    pSVar5 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = TM::TM__(StringLiteral__color___0___1___color__shot_him,(MethodInfo *)0x0);
  return pSVar5;
}


/* String GetKillText(PlayerKilledByType, Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText_1
                   (PlayerKilledByType__Enum type,bool shotSelf,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  case PlayerKilledByType__Enum_Sword:
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVAvatar *)0x0) goto code_?;
  pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,data._0_3_);
  pTVar3 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (((data_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data_00,pTVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
     (pPVar4 == (Pool *)0x0)) goto code_?;
  if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar5 = (int32_t *)func_?(pPVar4);
    this_00 = MVPlayerContainer::MVPlayerContainer_get_Item
                        ((MVPlayerContainer *)pMVar2,*piVar5,(MethodInfo *)0x0);
    pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVAvatar *)0x0) goto code_?;
    pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
    pTVar3 = (Type *)func_?(TypeInfo__System__Byte,&uStack_6);
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data_00,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0) || (pPVar4 == (Pool *)0x0))
    goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar5 = (int32_t *)func_?(pPVar4);
    this_01 = MVPlayerContainer::MVPlayerContainer_get_Item
                        ((MVPlayerContainer *)pMVar2,*piVar5,(MethodInfo *)0x0);
    if (((this_01 == (MVPlayer *)0x0) ||
        (iVar7 = GamePointGainEffect::GamePointGainEffect_get_ID
                           ((GamePointGainEffect *)this_01,(MethodInfo *)0x0), iVar7 == 0)) ||
       ((pSVar8 = *(String **)(iVar7 + 0xc), this_00 == (MVPlayer *)0x0 ||
        (iVar7 = GamePointGainEffect::GamePointGainEffect_get_ID
                           ((GamePointGainEffect *)this_00,(MethodInfo *)0x0), iVar7 == 0))))
    goto code_?;
    pSVar9 = *(String **)(iVar7 + 0xc);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar10 = mscorlib.dll::System::String::String_op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_02 == (MVNetworkGame *)0x0) ||
        (this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)this_02,(MethodInfo *)0x0),
        this_03 == (SkyParam *)0x0)) ||
       (this_04 = MVTeamManager::MVTeamManager_GetTeamList
                            ((MVTeamManager *)this_03,(MethodInfo *)0x0),
       this_04 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                        );
    if ((int)pOVar11 < 2) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = Styles::Styles_GetColor
                          ((Color *)&stack0xffffffc8,ColorStyle__Enum_TeamNone,(MethodInfo *)0x0);
      __return_storage_ptr__ = (Color *)pCVar12->g;
      colorStyle = pCVar12->b;
      method_00 = (MethodInfo *)pCVar12->a;
      pCVar12 = Styles::Styles_GetColor
                          (__return_storage_ptr__,(ColorStyle__Enum)colorStyle,method_00);
    }
    else {
      pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = Styles::Styles_GetTeamColor
                          ((Color *)&stack0xffffffc8,(MVTeam__Enum)pIVar13,0,(MethodInfo *)0x0);
      puStack_14 = (undefined *)pCVar12->r;
      __return_storage_ptr__ = (Color *)pCVar12->g;
      colorStyle = pCVar12->b;
      method_00 = (MethodInfo *)pCVar12->a;
      pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
      pCVar12 = Styles::Styles_GetTeamColor
                          ((Color *)&stack0xffffffc8,(MVTeam__Enum)pIVar13,0,(MethodInfo *)0x0);
    }
    fVar15 = pCVar12->r;
    fVar16 = pCVar12->g;
    fVar17 = pCVar12->b;
    fVar18 = pCVar12->a;
    pTVar19 = (this->fields).Label;
    pSVar8 = KillNotification_GetKillText(data_00,bVar10 != 0,(MethodInfo *)0x0);
    this_05 = (GamePointGainEffect *)&UNK_?;
    args = (Object__Array *)func_?();
    c_00.g = (float)__return_storage_ptr__;
    c_00.r = (float)puStack_14;
    c_00.b = colorStyle;
    c_00.a = (float)method_00;
    CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    pSVar9 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar20 & 0xffffffff),method_01);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar9 != (String *)0x0) &&
       (iVar21 = func_?(pSVar9,(args->klass->_0).element_class), iVar21 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar9;
    iVar7 = GamePointGainEffect::GamePointGainEffect_get_ID
                      ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
    if (iVar7 == 0) goto code_?;
    pOVar11 = *(Object **)(iVar7 + 0xc);
    if ((pOVar11 != (Object *)0x0) &&
       (iVar21 = func_?(pOVar11,(args->klass->_0).element_class), iVar21 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar11;
    c.g = fVar16;
    c.r = fVar15;
    c.b = fVar17;
    c.a = fVar18;
    CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c,(MethodInfo *)0x0);
    pSVar9 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar20 & 0xffffffff),method_00);
    if ((pSVar9 != (String *)0x0) &&
       (iVar21 = func_?(pSVar9,(args->klass->_0).element_class), iVar21 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar9;
    iVar7 = GamePointGainEffect::GamePointGainEffect_get_ID(this_05,(MethodInfo *)0x0);
    if (iVar7 == 0) goto code_?;
    pOVar11 = *(Object **)(iVar7 + 0xc);
    if ((pOVar11 != (Object *)0x0) &&
       (iVar21 = func_?(pOVar11,(args->klass->_0).element_class), iVar21 == 0))
    goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = pOVar11;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar8 = mscorlib.dll::System::String::String_Format_3(pSVar8,args,(MethodInfo *)0x0);
      if (pTVar19 != (Text *)0x0) {
        (*(code *)(pTVar19->klass->vtable).set_text.method)
                  (pTVar19,pSVar8,(pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    func_?(pPVar4,TypeInfo__System__Int32);
code_?:
    uVar22 = func_?(0,0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0,0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0,0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0);
    func_?(uVar22);
code_?:
    uVar22 = func_?(0,0);
    func_?(uVar22);
  }
  uVar22 = func_?(0,0);
  func_?(uVar22);
code_?:
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}

