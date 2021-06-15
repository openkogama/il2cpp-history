
/* Void InvalidateStreamingAssetsCache(Boolean) */

void Assembly-CSharp.dll::KoGaMaSettingsContainer::
     KoGaMaSettingsContainer_InvalidateStreamingAssetsCache
               (KoGaMaSettingsContainer *this,bool serialize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow(&DStack_2,(MethodInfo *)0x0);
  uStack_3 = (undefined4)(pDVar1->ticks)._ticks;
  uStack_4 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iStack_5 = pDVar1->kind;
  uStack_6 = *(undefined4 *)&pDVar1->field_0xc;
  iVar7 = func_?(TypeInfo__KoGaMaSettingsContainer__CrunchDesc,6);
  uVar8 = 0;
  if (iVar7 == 0) {
    func_?(0);
code_?:
    uVar9 = func_?(0,uVar8);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,uVar8);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,uVar8);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,uVar8);
    func_?(uVar9);
  }
  else {
    uStack_10 = 0;
    sVar11 = func_?(&uStack_3);
    uStack_10 = CONCAT13(uStack_10._3_1_,0x60000);
    uStack_10 = CONCAT22(uStack_10._2_2_,sVar11 + -0x7e1);
    uVar8 = 0;
    if (*(int *)(iVar7 + 0xc) == 0) goto code_?;
    puVar12 = (undefined4 *)(iVar7 + 0x10);
    *puVar12 = uStack_10;
    uStack_10 = 0;
    uVar13 = func_?(&uStack_3);
    uStack_10._0_3_ = CONCAT12(4,uVar13);
    uVar8 = 0;
    if (*(uint *)(iVar7 + 0xc) < 2) goto code_?;
    *(undefined4 *)(iVar7 + 0x14) = uStack_10;
    uStack_10 = 0;
    uVar13 = func_?(&uStack_3);
    uStack_10._0_3_ = CONCAT12(5,uVar13);
    uVar8 = 0;
    if (*(uint *)(iVar7 + 0xc) < 3) goto code_?;
    *(undefined4 *)(iVar7 + 0x18) = uStack_10;
    uStack_10 = 0;
    uVar13 = func_?(&uStack_3);
    uStack_10._0_3_ = CONCAT12(5,uVar13);
    uVar8 = 0;
    if (*(uint *)(iVar7 + 0xc) < 4) goto code_?;
    *(undefined4 *)(iVar7 + 0x1c) = uStack_10;
    uStack_10 = 0;
    uVar13 = func_?(&uStack_3);
    uStack_10._0_3_ = CONCAT12(6,uVar13);
    uVar8 = 0;
    if (4 < *(uint *)(iVar7 + 0xc)) {
      *(undefined4 *)(iVar7 + 0x20) = uStack_10;
      uStack_10 = 0;
      uVar13 = func_?(&uStack_3);
      uStack_10._0_3_ = CONCAT12(6,uVar13);
      if (5 < *(uint *)(iVar7 + 0xc)) {
        iVar14 = 0;
        *(undefined4 *)(iVar7 + 0x24) = uStack_10;
        uVar15 = 0;
        while( true ) {
          if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar15) {
            (this->fields).streamingAssetVersion = iVar14;
            return;
          }
          if (*(uint *)(iVar7 + 0xc) <= uVar15) break;
          uVar15 = uVar15 + 1;
          iVar14 = (iVar14 << ((byte)((uint)*puVar12 >> 0x10) & 0x1f)) + (int)(short)*puVar12;
          puVar12 = puVar12 + 1;
        }
      }
      goto code_?;
    }
  }
  uVar8 = func_?(0,uVar8);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* KoGaMaSettingsContainer() */

void Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer__ctor
               (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).versionGuid = TypeInfo__System__String->static_fields->Empty;
  (this->fields).branchName = TypeInfo__System__String->static_fields->Empty;
  (this->fields).buildTime = TypeInfo__System__String->static_fields->Empty;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}


/* String get_ReleaseName() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  pTVar1 = (this->fields).additionalMetaData;
  if (pTVar1 == (TextAsset *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pcRam_? = pcVar2;
  pSVar3 = (String *)(*pcRam_?)(pTVar1);
  return pSVar3;
}


/* String get_UrlCacheAssetVersionArgument() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::
         KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (KoGaMaSettingsContainer *)(this->fields).streamingAssetVersion;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral__version_,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int32 get_VersionCode() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionCode
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 == (TextAsset *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar3 = mscorlib.dll::System::Int32::Int32_Parse
                    (in_stack_4,0,(int32_t *)&stack0x00000000,(Exception **)&stack0xfffffffc,
                     (MethodInfo *)0x0);
  if (bVar3 != 0) {
    return 0;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Int32 get_VersionMajor() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMajor
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,0,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEStack1 = (Exception *)0x0;
      puStack2 = (undefined *)0x0;
      bVar3 = mscorlib.dll::System::Int32::Int32_Parse
                        ((String *)in_stack_4,0,(int32_t *)&stack0x00000010,&stack0x0000000c,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return (int32_t)puStack2;
      }
      in_stack_4 = MethodInfo__System__Int32__Parse_System__String_;
      uStack5 = 0;
      pEStack6 = pEStack1;
      func_?();
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return iVar8;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Int32 get_VersionMicro() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMicro
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,3,3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEStack1 = (Exception *)0x0;
      puStack2 = (undefined *)0x0;
      bVar3 = mscorlib.dll::System::Int32::Int32_Parse
                        ((String *)in_stack_4,0,(int32_t *)&stack0x00000010,&stack0x0000000c,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return (int32_t)puStack2;
      }
      in_stack_4 = MethodInfo__System__Int32__Parse_System__String_;
      uStack5 = 0;
      pEStack6 = pEStack1;
      func_?();
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return iVar8;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Int32 get_VersionMinor() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMinor
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,1,2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEStack1 = (Exception *)0x0;
      puStack2 = (undefined *)0x0;
      bVar3 = mscorlib.dll::System::Int32::Int32_Parse
                        ((String *)in_stack_4,0,(int32_t *)&stack0x00000010,&stack0x0000000c,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return (int32_t)puStack2;
      }
      in_stack_4 = MethodInfo__System__Int32__Parse_System__String_;
      uStack5 = 0;
      pEStack6 = pEStack1;
      func_?();
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return iVar8;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* String get_VersionString() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,7);
  pTVar1 = (this->fields).versionText;
  if ((pTVar1 == (TextAsset *)0x0) ||
     (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,1,(MethodInfo *)0x0);
    puStack_4 = (undefined *)mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&puStack_4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar5;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)::StringLiteral__;
    pTVar1 = (this->fields).versionText;
    if ((pTVar1 == (TextAsset *)0x0) ||
       (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0))
    goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,1,2,(MethodInfo *)0x0);
    mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)::StringLiteral__;
    pTVar1 = (this->fields).versionText;
    if ((pTVar1 == (TextAsset *)0x0) ||
       (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0))
    goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,3,3,(MethodInfo *)0x0);
    mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
    if ((pOVar5 != (Object *)0x0) && (iVar6 = func_?(), iVar6 == 0)) goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar5;
    if ((::StringLiteral__ != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = (Object *)::StringLiteral__;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
      if (6 < args->max_length) {
        args->vector[6] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar2;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar7)();
  return pSVar2;
}


/* String get_VersionStringNoBuild() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::
         KoGaMaSettingsContainer_get_VersionStringNoBuild
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  pTVar1 = (this->fields).versionText;
  if ((pTVar1 == (TextAsset *)0x0) ||
     (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,1,(MethodInfo *)0x0);
    iStack_4 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar5;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)::StringLiteral__;
    pTVar1 = (this->fields).versionText;
    if ((pTVar1 == (TextAsset *)0x0) ||
       (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0))
    goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,1,2,(MethodInfo *)0x0);
    mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)::StringLiteral__;
    pTVar1 = (this->fields).versionText;
    if ((pTVar1 == (TextAsset *)0x0) ||
       (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0), pSVar2 == (String *)0x0))
    goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,3,3,(MethodInfo *)0x0);
    mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
    if ((pOVar5 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
      if (4 < args->max_length) {
        args->vector[4] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar2;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar7)();
  return pSVar2;
}

