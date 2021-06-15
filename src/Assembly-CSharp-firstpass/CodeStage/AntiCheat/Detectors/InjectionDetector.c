
/* Boolean AssemblyAllowed(Assembly) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_AssemblyAllowed(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((ass != (Assembly *)0x0) &&
     (this_00 = (Collection_1_VoxelHit_ *)
                (*(code *)(ass->klass->vtable).GetName_1.method)
                          (ass,(ass->klass->vtable).UnprotectedGetName.methodPtr),
     this_00 != (Collection_1_VoxelHit_ *)0x0)) {
    b = (String *)
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    value = InjectionDetector_GetAssemblyHash(this,ass,(MethodInfo *)0x0);
    pIVar1 = (this->fields).allowedAssemblies;
    uVar2 = 0;
    if (pIVar1 != (InjectionDetector_AllowedAssembly__Array *)0x0) {
      iVar3 = 0x10;
      do {
        if ((int)pIVar1->max_length <= (int)uVar2) {
          return 0;
        }
        if (pIVar1 == (InjectionDetector_AllowedAssembly__Array *)0x0) break;
        if (pIVar1->max_length <= uVar2) goto code_?;
        iVar4 = *(int *)((int)pIVar1->vector + iVar3 + -0x10);
        if (iVar4 == 0) break;
        a = *(String **)(iVar4 + 8);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar5 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
        if ((bVar5 != 0) &&
           (iVar6 = mscorlib.dll::System::Array::Array_IndexOf_7
                              (*(Int32__Array **)(iVar4 + 0xc),value,
                               int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_),
           iVar6 != -1)) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
        pIVar1 = (this->fields).allowedAssemblies;
      } while (pIVar1 != (InjectionDetector_AllowedAssembly__Array *)0x0);
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Awake(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).Init.method)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Injection_Detector,
                     (this->klass->vtable).DisposeInternal.methodPtr);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = this;
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>__UnityAction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
  SceneManager_add_sceneLoaded
            ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
              *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (pIVar1 == (InjectionDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar1->klass;
    pIStack3 = (pIVar5->vtable).DetectorHasAdditionalCallbacks.methodPtr;
    (*(code *)(pIVar5->vtable).DisposeInternal.method)();
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_DisposeInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
      _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      uStack2 = _UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = (InjectionDetector *)0x0;
  }
  return;
}


/* Boolean FindInjectionInCurrentAssemblies(String ByRef) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_FindInjectionInCurrentAssemblies
               (InjectionDetector *this,String **cause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  *cause = (String *)0x0;
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  if (this_00 != (AppDomain *)0x0) {
    pAVar2 = mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(this_00,(MethodInfo *)0x0);
    if (pAVar2 != (Assembly__Array *)0x0) {
      if (pAVar2->max_length == 0) {
        *cause = StringLiteral_no_assemblies;
        return 1;
      }
      uVar3 = 0;
      ppAVar4 = pAVar2->vector;
      while( true ) {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          return (bool)((uint)uVar1 >> 0x18);
        }
        if (pAVar2->max_length <= uVar3) goto code_?;
        ass = *ppAVar4;
        bVar5 = InjectionDetector_AssemblyAllowed(this,ass,(MethodInfo *)0x0);
        if (bVar5 == 0) break;
        uVar3 = uVar3 + 1;
        ppAVar4 = ppAVar4 + 1;
      }
      if (ass != (Assembly *)0x0) {
        pSVar6 = (String *)func_?(6,ass);
        *cause = pSVar6;
        return 1;
      }
    }
  }
  func_?(0);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Int32 GetAssemblyHash(Assembly) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
        InjectionDetector_GetAssemblyHash(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((ass != (Assembly *)0x0) &&
      (this_00 = (AssemblyName *)
                 (*(code *)(ass->klass->vtable).GetName_1.method)
                           (ass,(ass->klass->vtable).UnprotectedGetName.methodPtr),
      this_00 != (AssemblyName *)0x0)) &&
     (pBVar1 = mscorlib.dll::System::Reflection::AssemblyName::AssemblyName_GetPublicKeyToken
                         (this_00,(MethodInfo *)0x0), pBVar1 != (Byte__Array *)0x0)) {
    iVar2 = pBVar1->max_length;
    this_01 = (Collection_1_VoxelHit_ *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (7 < (int)iVar2) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      uVar3 = 0;
      ass = (Assembly *)TypeInfo__System__String->static_fields->Empty;
      do {
        if (pBVar1->max_length <= uVar3) goto code_?;
        pSVar4 = (this->fields).hexTable;
        if (pSVar4 == (String__Array *)0x0) goto code_?;
        if (pSVar4->max_length <= (uint)pBVar1->vector[uVar3]) goto code_?;
        str1 = pSVar4->vector[pBVar1->vector[uVar3]];
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        ass = (Assembly *)
              mscorlib.dll::System::String::String_Concat_2((String *)ass,str1,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 8);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      this_01 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::String::String_Concat_2
                          ((String *)this_01,(String *)ass,(MethodInfo *)0x0);
    }
    uVar3 = 0;
    if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      index = 0;
      if (0 < (int)pIVar5) {
        do {
          uVar6 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)this_01,index,(MethodInfo *)0x0);
          index = index + 1;
          uVar3 = (uVar6 + uVar3) * 0x401;
          uVar3 = uVar3 ^ (int)uVar3 >> 6;
        } while (index < (int)pIVar5);
      }
      return ((int)(uVar3 * 9) >> 0xb ^ uVar3 * 9) * 0x8001;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Void LoadAndParseAllowedAssemblies() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_LoadAndParseAllowedAssemblies(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__UnityEngine__TextAsset;
  uStack_1 = 0;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  systemTypeInstance =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  pTVar2 = (TextAsset *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_fndid,systemTypeInstance,(MethodInfo *)0x0);
  if (pTVar2 == (TextAsset *)0x0) {
    this_02 = (TextAsset *)0x0;
code_?:
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object,this_02);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      (this->fields).signaturesAreNotGenuine = 1;
      return;
    }
    piVar4 = (int *)func_?(TypeInfo__System__String,1);
    if (piVar4 == (int *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar5 = func_?(::StringLiteral__,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0))
    goto code_?;
    if (piVar4[3] != 0) {
      piVar4[4] = (int)::StringLiteral__;
      if (this_02 != (TextAsset *)0x0) {
        buffer = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_get_bytes
                           (this_02,(MethodInfo *)0x0);
        this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
        mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_2
                  (this_00,buffer,(MethodInfo *)0x0);
        this_01 = (ScaleAnimationBase *)func_?(TypeInfo__System__IO__BinaryReader);
        mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor
                  ((BinaryReader *)this_01,(Stream *)this_00,(MethodInfo *)0x0);
        if (this_01 != (ScaleAnimationBase *)0x0) {
          iVar5 = (*(code *)(((BinaryReader__Class *)this_01->klass)->vtable).ReadInt32.method)
                            (this_01,(((BinaryReader__Class *)this_01->klass)->vtable).ReadInt64.
                                     methodPtr);
          pIVar6 = (InjectionDetector_AllowedAssembly__Array *)
                    func_?(TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly
                                    ,iVar5);
          pTStack_7 = (TextAsset *)0x0;
          (this->fields).allowedAssemblies = pIVar6;
          if (0 < iVar5) {
            do {
              pSVar8 = (String__Array *)&UNK_?;
              pSVar9 = (String *)
                        (*(code *)(((BinaryReader__Class *)this_01->klass)->vtable).ReadString.
                                  method)(this_01,(((BinaryReader__Class *)this_01->klass)->vtable).
                                                  ReadSingle.methodPtr);
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started
                  == 0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
              }
              pSVar9 = ObscuredTypes::ObscuredString::ObscuredString_EncryptDecrypt_1
                                  (pSVar9,StringLiteral_Elina,(MethodInfo *)0x0);
              if ((pSVar9 == (String *)0x0) ||
                 (pSVar8 = mscorlib.dll::System::String::String_Split_5
                                      (pSVar9,pSVar8,StringSplitOptions__Enum_RemoveEmptyEntries,
                                       (MethodInfo *)0x0), pSVar8 == (String__Array *)0x0))
              goto code_?;
              iVar10 = pSVar8->max_length;
              if ((int)iVar10 < 2) {
                (this->fields).signaturesAreNotGenuine = 1;
                func_?(6,this_01);
                if (this_00 != (MemoryStream *)0x0) {
                  func_?(0xc,this_00);
                  return;
                }
                goto code_?;
              }
              func_?(0);
              iVar11 = func_?(TypeInfo__System__Int32,iVar10 - 1);
              iVar12 = 1;
              do {
                pSVar9 = (String *)func_?(iVar12);
                iVar13 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar9,(MethodInfo *)0x0);
                if (iVar11 == 0) goto code_?;
                func_?(iVar12 + -1,iVar13);
                iVar12 = iVar12 + 1;
              } while (iVar12 < (int)pSVar9);
              pIVar6 = (this->fields).allowedAssemblies;
              method_00 = (MethodInfo *)&UNK_?;
              this_01 = (ScaleAnimationBase *)
                        func_?(
                                       TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly
                                       );
              pSVar14 = this_01;
              Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                        (this_01,0.0,method_00);
              (this_01->fields)._._._._.m_CachedPtr = pSVar14;
              (this_01->fields).state = iVar11;
              if (pIVar6 == (InjectionDetector_AllowedAssembly__Array *)0x0) goto code_?;
              func_?(pIVar6,this_01);
              this_02 = pTStack_7;
              func_?();
              pTStack_7 = (TextAsset *)((int)&pTStack_7->klass + 1);
            } while ((int)pTStack_7 < iVar5);
          }
          (*(code *)(((BinaryReader__Class *)this_01->klass)->vtable).Close.method)
                    (this_01,(((BinaryReader__Class *)this_01->klass)->vtable).Dispose.methodPtr);
          if (this_00 != (MemoryStream *)0x0) {
            (*(code *)(this_00->klass->vtable).Close.method)
                      (this_00,(this_00->klass->vtable).Flush.methodPtr);
            UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadAsset
                      ((Object_1 *)this_02,(MethodInfo *)0x0);
            pSVar8 = (String__Array *)func_?(TypeInfo__System__String,0x100);
            uStack_1 = 0;
            (this->fields).hexTable = pSVar8;
            while( true ) {
              uVar15 = uStack_1;
              pSVar8 = (this->fields).hexTable;
              pSVar9 = (String *)func_?(&uStack_1,StringLiteral_x2,0);
              if (pSVar8 == (String__Array *)0x0) break;
              if ((pSVar9 != (String *)0x0) &&
                 (iVar5 = func_?(pSVar9,(pSVar8->klass->_0).element_class), iVar5 == 0))
              goto code_?;
              if (pSVar8->max_length <= uVar15) goto code_?;
              pSVar8->vector[uVar15] = pSVar9;
              uStack_1 = uStack_1 + 1;
              if (0xff < (int)uStack_1) {
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  else {
    bVar16 = (TypeInfo__UnityEngine__TextAsset->_1).naturalAligment;
    if (((pTVar2->klass->_1).naturalAligment < bVar16) ||
       ((pTVar2->klass->_1).typeHierarchy[bVar16 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__TextAsset)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    this_02 = (TextAsset *)0x0;
    if (bVar17) {
      this_02 = pTVar2;
    }
    if (this_02 != (TextAsset *)0x0) goto code_?;
    func_?(pTVar2,TypeInfo__UnityEngine__TextAsset,0);
code_?:
    uVar18 = func_?(0,0);
    func_?(uVar18);
  }
code_?:
  uVar18 = func_?(0,0);
  func_?(uVar18);
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnCheatingDetected(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnCheatingDetected(InjectionDetector *this,String *cause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).detectionActionWithArgument;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)cause,
               MethodInfo__UnityEngine__Events__UnityAction<System::String>__Invoke_System__String_)
    ;
  }
  this_01 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields)._.detectionAction;
  if (this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    Assembly-CSharp.dll::AvatarMotor+OnActiveBounceDelegate::
    AvatarMotor_OnActiveBounceDelegate_Invoke(this_01,(MethodInfo *)0x0);
  }
  if ((this->fields)._.detectionEventHasListener != 0) {
    this_02 = (this->fields)._.detectionEvent;
    if (this_02 == (UnityEvent *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_02,(MethodInfo *)0x0);
  }
  if ((this->fields)._.autoDispose == 0) {
    (*(code *)(this->klass->vtable).StopDetectionInternal.method)(this);
    return;
  }
  (*(code *)(this->klass->vtable).DisposeInternal.method)(this);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnDestroy(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_OnDestroy((ActDetectorBase *)this,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene
       + -1;
  return;
}


/* Void OnLevelLoadedCallback() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnLevelLoadedCallback(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._.keepAlive;
  if (TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene
      < 2) {
    if (bVar1 != 0) {
      return;
    }
  }
  else {
    if (bVar1 != 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    x = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
        _Instance_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  (*(code *)(this->klass->vtable).DisposeInternal.method)
            (this,(this->klass->vtable).DetectorHasAdditionalCallbacks.methodPtr);
  return;
}


/* Void OnNewAssemblyLoaded(Object, AssemblyLoadEventArgs) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnNewAssemblyLoaded
               (InjectionDetector *this,Object *sender,AssemblyLoadEventArgs *args,
               MethodInfo *method)

{
  if (args != (AssemblyLoadEventArgs *)0x0) {
    ass = (Assembly *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
    bVar1 = InjectionDetector_AssemblyAllowed(this,ass,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)args,(MethodInfo *)0x0);
      if (pIVar2 == (IList_1_VoxelHit_ *)0x0) goto code_?;
      this_00 = (InjectionDetector *)(*(code *)pIVar2->klass[1]._0.namespaze)();
      InjectionDetector_OnCheatingDetected(this_00,(String *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PauseDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_PauseDetector(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.isRunning = 0;
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__AssemblyLoadEventHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (AppDomain *)0x0) {
    mscorlib.dll::System::AppDomain::AppDomain_remove_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String PublicKeyTokenToString(Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
         InjectionDetector_PublicKeyTokenToString
                   (InjectionDetector *this,Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSStack_1 = TypeInfo__System__String->static_fields->Empty;
  uVar2 = 0;
  while (bytes != (Byte__Array *)0x0) {
    if (bytes->max_length <= uVar2) goto code_?;
    pSVar3 = (this->fields).hexTable;
    if (pSVar3 == (String__Array *)0x0) break;
    if (pSVar3->max_length <= (uint)bytes->vector[uVar2]) goto code_?;
    pSVar4 = pSVar3->vector[bytes->vector[uVar2]];
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSStack_1 = mscorlib.dll::System::String::String_Concat_2(pSStack_1,pSVar4,(MethodInfo *)0x0);
    uVar2 = uVar2 + 1;
    if (7 < (int)uVar2) {
      return pSStack_1;
    }
  }
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* Void ResumeDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_ResumeDetector(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((this->fields)._.detectionAction != (UnityAction *)0x0) ||
      ((this->fields).detectionActionWithArgument != (UnityAction_1_System_String_ *)0x0)) ||
     ((this->fields)._.detectionEventHasListener != 0)) {
    (this->fields)._.isRunning = 1;
    this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__AssemblyLoadEventHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (AppDomain *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral__ACTk__Injection_Detector__can_t,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (pIVar1 != (InjectionDetector *)0x0) {
    InjectionDetector_StartDetectionInternal
              (pIVar1,(UnityAction *)0x0,(UnityAction_1_System_String_ *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartDetectionAutomatically() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetectionAutomatically(InjectionDetector *this,MethodInfo *method)

{
  InjectionDetector_StartDetectionInternal
            (this,(UnityAction *)0x0,(UnityAction_1_System_String_ *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void StartDetectionInternal(UnityAction, UnityAction`1[System.String]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetectionInternal
               (InjectionDetector *this,UnityAction *callback,
               UnityAction_1_System_String_ *callbackWithArgument,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__alrea,(Object_1 *)this,
               (MethodInfo *)0x0);
    return;
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__disab,(Object_1 *)this,
               (MethodInfo *)0x0);
    return;
  }
  if ((callback != (UnityAction *)0x0) ||
     (callbackWithArgument != (UnityAction_1_System_String_ *)0x0)) {
    if ((this->fields)._.detectionEventHasListener != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                ((Object *)StringLiteral__ACTk__Injection_Detector__has_p,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    if ((callback != (UnityAction *)0x0) ||
       (callbackWithArgument != (UnityAction_1_System_String_ *)0x0)) goto code_?;
  }
  if ((this->fields)._.detectionEventHasListener == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)this,
               (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  pIVar2 = (this->fields).allowedAssemblies;
  (this->fields)._.detectionAction = callback;
  (this->fields).detectionActionWithArgument = callbackWithArgument;
  (this->fields)._.isRunning = 1;
  (this->fields)._.started = 1;
  if (pIVar2 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
    InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
  }
  if ((this->fields).signaturesAreNotGenuine != 0) {
    InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar3 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  if (pAVar3 != (AppDomain *)0x0) {
    pAVar4 = mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(pAVar3,(MethodInfo *)0x0);
    if (pAVar4 != (Assembly__Array *)0x0) {
      if (pAVar4->max_length == 0) {
        InjectionDetector_OnCheatingDetected(this,StringLiteral_no_assemblies,(MethodInfo *)0x0);
        return;
      }
      uVar5 = 0;
      ppAVar6 = pAVar4->vector;
      while( true ) {
        if ((int)pAVar4->max_length <= (int)uVar5) break;
        if (pAVar4->max_length <= uVar5) {
          uVar7 = func_?(0);
          func_?(uVar7);
          goto code_?;
        }
        ass = *ppAVar6;
        bVar1 = InjectionDetector_AssemblyAllowed(this,ass,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (ass != (Assembly *)0x0) {
            cause = (String *)func_?();
            InjectionDetector_OnCheatingDetected(this,cause,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        uVar5 = uVar5 + 1;
        ppAVar6 = ppAVar6 + 1;
      }
      pAVar3 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__AssemblyLoadEventHandler);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
      if (pAVar3 != (AppDomain *)0x0) {
        mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
                  (pAVar3,(AssemblyLoadEventHandler *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartDetection(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection_1(UnityAction *callback,MethodInfo *method)

{
  this = InjectionDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this != (InjectionDetector *)0x0) {
    InjectionDetector_StartDetectionInternal
              (this,callback,(UnityAction_1_System_String_ *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartDetection(UnityAction`1[System.String]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection_2(UnityAction_1_System_String_ *callback,MethodInfo *method)

{
  this = InjectionDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this != (InjectionDetector *)0x0) {
    InjectionDetector_StartDetectionInternal(this,(UnityAction *)0x0,callback,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (pIVar1 == (InjectionDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar1->klass;
    pIStack3 = (pIVar5->vtable).PauseDetector.methodPtr;
    (*(code *)(pIVar5->vtable).StopDetectionInternal.method)();
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetectionInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.started != 0) {
    this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__AssemblyLoadEventHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (AppDomain *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::AppDomain::AppDomain_remove_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    (this->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
    (this->fields)._.isRunning = 0;
    (this->fields)._.started = 0;
  }
  return;
}


/* InjectionDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector__ctor(InjectionDetector *this,MethodInfo *method)

{
  (this->fields)._.autoStart = 1;
  (this->fields)._.keepAlive = 1;
  (this->fields)._.autoDispose = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* InjectionDetector get_GetOrCreateInstance() */

InjectionDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
InjectionDetector_get_GetOrCreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar3,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar3;
    }
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if (pGVar3 == (GameObject *)0x0) {
      func_?(0);
      pcVar4 = (code *)swi(3);
      pIVar1 = (InjectionDetector *)(*pcVar4)();
      return pIVar1;
    }
    pIVar1 = (InjectionDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__InjectionDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::InjectionDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = pIVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
         _Instance_k__BackingField;
}


/* InjectionDetector get_Instance() */

InjectionDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
InjectionDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
         _Instance_k__BackingField;
}


/* Void set_Instance(InjectionDetector) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_set_Instance(InjectionDetector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
  _Instance_k__BackingField = value;
  return;
}

