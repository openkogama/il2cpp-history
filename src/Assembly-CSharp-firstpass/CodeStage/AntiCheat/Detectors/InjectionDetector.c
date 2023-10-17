
/* Boolean AssemblyAllowed(Assembly) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_AssemblyAllowed(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
    cRam_? = '\x01';
  }
  if ((ass != (Assembly *)0x0) &&
     (iVar1 = (*(ass->klass->vtable).GetName_1.methodPtr)(ass,(ass->klass->vtable).GetName_1.method)
     , iVar1 != 0)) {
    b = *(String **)(iVar1 + 8);
    this_00 = (AssemblyName *)
              (*(ass->klass->vtable).GetName_1.methodPtr)(ass,(ass->klass->vtable).GetName_1.method)
    ;
    if ((this_00 != (AssemblyName *)0x0) &&
       (pBVar2 = mscorlib.dll::System::Reflection::AssemblyName::AssemblyName_GetPublicKeyToken
                           (this_00,(MethodInfo *)0x0), pBVar2 != (Byte__Array *)0x0)) {
      str0_00 = (this_00->fields).name;
      if (7 < (int)pBVar2->max_length) {
        if (cRam_? == '\0') {
          func_?(&::StringLiteral__);
          cRam_? = '\x01';
        }
        uVar3 = 0;
        str0 = ::StringLiteral__;
        do {
          if (pBVar2->max_length <= uVar3) goto code_?;
          pSVar4 = (this->fields).hexTable;
          if (pSVar4 == (String__Array *)0x0) goto code_?;
          if (pSVar4->max_length <= (uint)pBVar2->vector[uVar3]) goto code_?;
          str0 = mscorlib.dll::System::String::String_Concat_3
                           (str0,pSVar4->vector[pBVar2->vector[uVar3]],(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 8);
        str0_00 = mscorlib.dll::System::String::String_Concat_3(str0_00,str0,(MethodInfo *)0x0);
      }
      uVar3 = 0;
      if (str0_00 != (String *)0x0) {
        iVar1 = (str0_00->fields)._stringLength;
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            uVar6 = mscorlib.dll::System::String::String_get_Chars(str0_00,iVar5,(MethodInfo *)0x0)
            ;
            iVar5 = iVar5 + 1;
            uVar3 = (uVar6 + uVar3) * 0x401;
            uVar3 = uVar3 ^ (int)uVar3 >> 6;
          } while (iVar5 < iVar1);
        }
        uVar7 = 0;
        pIVar8 = (this->fields).allowedAssemblies;
        if (pIVar8 != (InjectionDetector_AllowedAssembly__Array *)0x0) {
          iVar1 = 0x10;
          do {
            if ((int)pIVar8->max_length <= (int)uVar7) {
              return 0;
            }
            pIVar8 = (this->fields).allowedAssemblies;
            if (pIVar8 == (InjectionDetector_AllowedAssembly__Array *)0x0) break;
            if (pIVar8->max_length <= uVar7) goto code_?;
            iVar5 = *(int *)((int)pIVar8->vector + iVar1 + -0x10);
            if (iVar5 == 0) break;
            bVar9 = mscorlib.dll::System::String::String_op_Equality
                              (*(String **)(iVar5 + 8),b,(MethodInfo *)0x0);
            if ((bVar9 != 0) &&
               (iVar10 = mscorlib.dll::System::Array::Array_IndexOf_3
                                  (*(Int32__Array **)(iVar5 + 0xc),
                                   ((int)(uVar3 * 9) >> 0xb ^ uVar3 * 9) * 0x8001,
                                   int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_
                                  ), iVar10 != -1)) {
              return 1;
            }
            uVar7 = uVar7 + 1;
            iVar1 = iVar1 + 4;
            pIVar8 = (this->fields).allowedAssemblies;
          } while (pIVar8 != (InjectionDetector_AllowedAssembly__Array *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
code_?:
  func_?();
  goto code_?;
}


/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Awake(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                   );
    func_?(&StringLiteral_Injection_Detector);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).Init.methodPtr)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Injection_Detector,
                     (this->klass->vtable).Init.method);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = this;
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
                     _Instance_k__BackingField,this);
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                           );
  if (this_00 != (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,System::Int32Enum]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
    SceneManager_add_sceneLoaded
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      ppIStack3 = &TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector;
      func_?();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (pIVar1 == (InjectionDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar1->klass;
    ppIStack3 = (InjectionDetector__Class **)(pIVar5->vtable).DisposeInternal.method;
    (*(pIVar5->vtable).DisposeInternal.methodPtr)();
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_DisposeInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      ppIStack2 = &TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = (InjectionDetector *)0x0;
    func_?();
    return;
  }
  return;
}


/* Boolean FindInjectionInCurrentAssemblies(String ByRef) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_FindInjectionInCurrentAssemblies
               (InjectionDetector *this,String **cause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_no_assemblies);
    cRam_? = '\x01';
  }
  *cause = (String *)0x0;
  func_?(cause,0);
  uVar1 = 0;
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  if (this_00 != (AppDomain *)0x0) {
    pAVar2 = mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(this_00,(MethodInfo *)0x0);
    if (pAVar2 != (Assembly__Array *)0x0) {
      if (pAVar2->max_length == 0) {
        *cause = StringLiteral_no_assemblies;
        func_?(cause,StringLiteral_no_assemblies);
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
        pSVar6 = (String *)func_?(8,ass);
        *cause = pSVar6;
        func_?(cause,pSVar6);
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Int32 GetAssemblyHash(Assembly) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
        InjectionDetector_GetAssemblyHash(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (ass != (Assembly *)0x0) {
    this_00 = (AssemblyName *)
              (*(ass->klass->vtable).GetName_1.methodPtr)(ass,(ass->klass->vtable).GetName_1.method)
    ;
    if (this_00 != (AssemblyName *)0x0) {
      pBVar1 = mscorlib.dll::System::Reflection::AssemblyName::AssemblyName_GetPublicKeyToken
                         (this_00,(MethodInfo *)0x0);
      if (pBVar1 != (Byte__Array *)0x0) {
        str0_00 = (this_00->fields).name;
        if (7 < (int)pBVar1->max_length) {
          if (cRam_? == '\0') {
            func_?(&::StringLiteral__);
            cRam_? = '\x01';
          }
          uVar2 = 0;
          str0 = ::StringLiteral__;
          do {
            if (pBVar1->max_length <= uVar2) goto code_?;
            pSVar3 = (this->fields).hexTable;
            if (pSVar3 == (String__Array *)0x0) goto code_?;
            if (pSVar3->max_length <= (uint)pBVar1->vector[uVar2]) goto code_?;
            str0 = mscorlib.dll::System::String::String_Concat_3
                             (str0,pSVar3->vector[pBVar1->vector[uVar2]],(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 8);
          str0_00 = mscorlib.dll::System::String::String_Concat_3(str0_00,str0,(MethodInfo *)0x0);
        }
        uVar2 = 0;
        if (str0_00 != (String *)0x0) {
          iVar4 = (str0_00->fields)._stringLength;
          index = 0;
          if (0 < iVar4) {
            do {
              uVar5 = mscorlib.dll::System::String::String_get_Chars
                                (str0_00,index,(MethodInfo *)0x0);
              index = index + 1;
              uVar2 = (uVar5 + uVar2) * 0x401;
              uVar2 = uVar2 ^ (int)uVar2 >> 6;
            } while (index < iVar4);
          }
          return ((int)(uVar2 * 9) >> 0xb ^ uVar2 * 9) * 0x8001;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void LoadAndParseAllowedAssemblies() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_LoadAndParseAllowedAssemblies(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly);
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly);
    func_?(&TypeInfo__System__IO__BinaryReader);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__IO__MemoryStream);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&TypeInfo__System__String);
    func_?(&TypeRef__UnityEngine__TextAsset);
    func_?(&TypeInfo__UnityEngine__TextAsset);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_fndid);
    func_?(&StringLiteral_x2);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Elina);
    cRam_? = '\x01';
  }
  handle = TypeRef__UnityEngine__TextAsset;
  IStack_1.m_value = 0;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  systemTypeInstance =
       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  this_00 = (TextAsset *)
            UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                      (StringLiteral_fndid,systemTypeInstance,(MethodInfo *)0x0);
  if (this_00 == (TextAsset *)0x0) {
    this_00 = (TextAsset *)0x0;
code_?:
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fields).signaturesAreNotGenuine = 1;
      return;
    }
    pSVar3 = (String__Array *)func_?(TypeInfo__System__String,1);
    if (pSVar3 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar4 = func_?(::StringLiteral__,(pSVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = ::StringLiteral__;
    if (pSVar3->max_length != 0) {
      pSVar3->vector[0] = ::StringLiteral__;
      func_?(pSVar3->vector,pSVar5);
      if (this_00 != (TextAsset *)0x0) {
        buffer = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_get_bytes
                           (this_00,(MethodInfo *)0x0);
        this_01 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
        if (this_01 != (MemoryStream *)0x0) {
          mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_2
                    (this_01,buffer,(MethodInfo *)0x0);
          this_02 = (InjectionDetector_AllowedAssembly__Class *)
                    func_?(TypeInfo__System__IO__BinaryReader);
          if (this_02 != (InjectionDetector_AllowedAssembly__Class *)0x0) {
            mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor
                      ((BinaryReader *)this_02,(Stream *)this_01,(MethodInfo *)0x0);
            pIVar6 = (this_02->_0).image;
            iVar7 = (*(code *)pIVar6[7].name)(this_02,pIVar6[7].nameNoExt);
            iVar4 = iVar7;
            pIVar8 = (InjectionDetector_AllowedAssembly__Array *)func_?(iVar7,iVar7);
            (this->fields).allowedAssemblies = pIVar8;
            func_?(&(this->fields).allowedAssemblies,pIVar8);
            if (0 < iVar7) {
              do {
                pIVar6 = (this_02->_0).image;
                uVar9 = pIVar6[8].exportedTypeCount;
                pSVar5 = (String *)(*(code *)pIVar6[8].typeCount)(this_02);
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
                }
                pSVar5 = ObscuredTypes::ObscuredString::ObscuredString_EncryptDecrypt_1
                                    (pSVar5,StringLiteral_Elina,(MethodInfo *)0x0);
                if ((pSVar5 == (String *)0x0) ||
                   (pSVar3 = mscorlib.dll::System::String::String_Split_4
                                       (pSVar5,pSVar3,StringSplitOptions__Enum_RemoveEmptyEntries,
                                        (MethodInfo *)0x0), pSVar3 == (String__Array *)0x0))
                goto code_?;
                iVar10 = pSVar3->max_length;
                if ((int)iVar10 < 2) {
                  (this->fields).signaturesAreNotGenuine = 1;
                  func_?(6,this_02);
                  func_?(0xd,this_01);
                  return;
                }
                if (iVar10 == 0) goto code_?;
                iVar7 = iVar10 - 1;
                item2 = (Object *)func_?(TypeInfo__System__Int32);
                ppSVar11 = pSVar3->vector;
                uVar12 = 1;
                pOVar13 = item2 + 2;
                do {
                  ppSVar11 = ppSVar11 + 1;
                  if (*(uint *)(iVar7 + 0xc) <= uVar12) goto code_?;
                  iVar7 = 0;
                  pSVar5 = *ppSVar11;
                  item1 = (Object *)&UNK_?;
                  pOVar14 = (Object__Class *)
                            mscorlib.dll::System::Int32::Int32_Parse(pSVar5,(MethodInfo *)0x0);
                  if (item2 == (Object *)0x0) goto code_?;
                  if (item2[1].monitor <= (MonitorData *)(uVar12 - 1)) goto code_?;
                  pOVar13->klass = pOVar14;
                  uVar12 = uVar12 + 1;
                  pOVar13 = (Object *)&pOVar13->monitor;
                } while ((int)uVar12 < (int)pSVar5);
                pIVar8 = (this->fields).allowedAssemblies;
                this_02 = 
                TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly;
                this_03 = (Tuple_2_Object_Object_ *)func_?();
                if (this_03 == (Tuple_2_Object_Object_ *)0x0) goto code_?;
                pSVar3 = (String__Array *)0x0;
                mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                          (this_03,item1,item2,(MethodInfo *)0x0);
                if (pIVar8 == (InjectionDetector_AllowedAssembly__Array *)0x0)
                goto code_?;
                iVar7 = func_?(this_03,(pIVar8->klass->_0).element_class);
                if (iVar7 == 0) goto code_?;
                func_?(uVar9,this_03);
              } while ((int)(uVar9 + 1) < iVar4);
            }
            pIVar6 = (this_02->_0).image;
            (*(code *)pIVar6[5].exportedTypeCount)(this_02,pIVar6[5].customAttributeCount);
            assetToUnload = (this_01->klass->vtable).Close.method;
            (*(this_01->klass->vtable).Close.methodPtr)(this_01);
            UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadAsset
                      ((Object_1 *)assetToUnload,(MethodInfo *)0x0);
            pSVar3 = (String__Array *)func_?(TypeInfo__System__String,0x100);
            (this->fields).hexTable = pSVar3;
            func_?(&(this->fields).hexTable,pSVar3);
            IStack_1.m_value = 0;
            while( true ) {
              IVar15.m_value = IStack_1.m_value;
              pSVar3 = (this->fields).hexTable;
              pSVar5 = mscorlib.dll::System::Int32::Int32_ToString_1
                                  (&IStack_1,StringLiteral_x2,(MethodInfo *)0x0);
              if (pSVar3 == (String__Array *)0x0) break;
              if ((pSVar5 != (String *)0x0) &&
                 (iVar4 = func_?(pSVar5,(pSVar3->klass->_0).element_class), iVar4 == 0))
              goto code_?;
              if (pSVar3->max_length <= (uint)IVar15.m_value) goto code_?;
              pSVar3->vector[IVar15.m_value] = pSVar5;
              func_?(pSVar3->vector + IVar15.m_value,pSVar5);
              IStack_1.m_value = IStack_1.m_value + 1;
              if (0xff < IStack_1.m_value) {
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
    if (((TypeInfo__UnityEngine__TextAsset->_1).typeHierarchyDepth <=
         (this_00->klass->_1).typeHierarchyDepth) &&
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__UnityEngine__TextAsset->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__UnityEngine__TextAsset)) goto code_?;
    func_?(this_00,TypeInfo__UnityEngine__TextAsset);
code_?:
    uVar16 = func_?(0);
    func_?(uVar16);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnCheatingDetected(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnCheatingDetected(InjectionDetector *this,String *cause,MethodInfo *method)

{
  if ((this->fields).detectionActionWithArgument != (UnityAction_1_System_String_ *)0x0) {
    pUVar1 = (this->fields).detectionActionWithArgument;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,cause,(pUVar1->fields)._._.method);
  }
  if ((this->fields)._.detectionAction != (UnityAction *)0x0) {
    pUVar2 = (this->fields)._.detectionAction;
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
  }
  if ((this->fields)._.detectionEventHasListener != 0) {
    this_00 = (this->fields)._.detectionEvent;
    if (this_00 == (UnityEvent *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pIVar4 = this->klass;
  if ((this->fields)._.autoDispose == 0) {
    (*(pIVar4->vtable).StopDetectionInternal.methodPtr)
              (this,(pIVar4->vtable).StopDetectionInternal.method);
    return;
  }
  (*(pIVar4->vtable).DisposeInternal.methodPtr)(this,(pIVar4->vtable).DisposeInternal.method);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnDestroy(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                   );
    func_?(&
                    UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).StopDetectionInternal.methodPtr)
            (this,(this->klass->vtable).StopDetectionInternal.method);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) goto code_?;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                    (this_00,(MethodInfo *)0x0);
  if (iVar1 == 0) {
    pIVar2 = Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                        UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                       );
    if (pIVar2 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if (2 < (int)pIVar2[1].monitor) goto code_?;
  }
  else {
code_?:
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)this,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
    pIVar2 = Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                        CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                       );
    if (pIVar2 == (IEnumerable_1_System_Object_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (1 < (int)pIVar2[1].monitor) goto code_?;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
code_?:
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    func_?(&TypeInfo__UnityEngine__Object);
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
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
      cRam_? = '\x01';
    }
    x = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
        _Instance_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  (*(this->klass->vtable).DisposeInternal.methodPtr)
            (this,(this->klass->vtable).DisposeInternal.method);
  return;
}


/* Void OnNewAssemblyLoaded(Object, AssemblyLoadEventArgs) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnNewAssemblyLoaded
               (InjectionDetector *this,Object *sender,AssemblyLoadEventArgs *args,
               MethodInfo *method)

{
  if (args != (AssemblyLoadEventArgs *)0x0) {
    bVar1 = InjectionDetector_AssemblyAllowed
                      (this,(args->fields)._LoadedAssembly_k__BackingField,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pAVar2 = (args->fields)._LoadedAssembly_k__BackingField;
      if (pAVar2 == (Assembly *)0x0) goto code_?;
      cause = (String *)(*(pAVar2->klass->vtable).get_FullName.methodPtr)(pAVar2);
      InjectionDetector_OnCheatingDetected(this,cause,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__AssemblyLoadEventHandler);
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                   );
    cRam_? = '\x01';
  }
  (this->fields)._.isRunning = 0;
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__AssemblyLoadEventHandler);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (AppDomain *)0x0) {
      mscorlib.dll::System::AppDomain::AppDomain_remove_AssemblyLoad
                (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pSVar2 = ::StringLiteral__;
  if (bytes == (Byte__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    while (uVar1 < bytes->max_length) {
      pSVar3 = (this->fields).hexTable;
      if (pSVar3 == (String__Array *)0x0) goto code_?;
      if (pSVar3->max_length <= (uint)bytes->vector[uVar1]) break;
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,pSVar3->vector[bytes->vector[uVar1]],(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      if (7 < (int)uVar1) {
        return pSVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
}


/* Void ResumeDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_ResumeDetector(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__AssemblyLoadEventHandler);
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                   );
    cRam_? = '\x01';
  }
  if ((((this->fields)._.detectionAction == (UnityAction *)0x0) &&
      ((this->fields).detectionActionWithArgument == (UnityAction_1_System_String_ *)0x0)) &&
     ((this->fields)._.detectionEventHasListener == 0)) {
    return;
  }
  (this->fields)._.isRunning = 1;
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__AssemblyLoadEventHandler);
  if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0), this_00 != (AppDomain *)0x0)) {
    mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__ACTk__Injection_Detector__can_t);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__System__AssemblyLoadEventHandler);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                   );
    func_?(&StringLiteral__ACTk__Injection_Detector__alrea);
    func_?(&StringLiteral__ACTk__Injection_Detector__disab);
    func_?(&StringLiteral__ACTk__Injection_Detector__was_s);
    func_?(&StringLiteral_signatures);
    func_?(&StringLiteral__ACTk__Injection_Detector__has_p);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  (this->fields)._.detectionAction = callback;
  func_?(&(this->fields)._.detectionAction,callback);
  (this->fields).detectionActionWithArgument = callbackWithArgument;
  func_?(&(this->fields).detectionActionWithArgument,callbackWithArgument);
  (this->fields)._.isRunning = 1;
  (this->fields)._.started = 1;
  if ((this->fields).allowedAssemblies == (InjectionDetector_AllowedAssembly__Array *)0x0) {
    InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
  }
  if ((this->fields).signaturesAreNotGenuine != 0) {
    InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_no_assemblies);
    cRam_? = '\x01';
  }
  func_?(&stack0xfffffff8,0);
  pAVar2 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  if (pAVar2 != (AppDomain *)0x0) {
    pAVar3 = mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(pAVar2,(MethodInfo *)0x0);
    if (pAVar3 != (Assembly__Array *)0x0) {
      if (pAVar3->max_length == 0) {
        cause = (String *)&UNK_?;
        func_?();
code_?:
        InjectionDetector_OnCheatingDetected(this,cause,(MethodInfo *)0x0);
        return;
      }
      uVar4 = 0;
      ppAVar5 = pAVar3->vector;
      while( true ) {
        if ((int)pAVar3->max_length <= (int)uVar4) break;
        if (pAVar3->max_length <= uVar4) {
          func_?();
          goto code_?;
        }
        puVar6 = &UNK_?;
        bVar1 = InjectionDetector_AssemblyAllowed(this,*ppAVar5,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (puVar6 == (undefined *)0x0) goto code_?;
          cause = (String *)func_?();
          func_?();
          goto code_?;
        }
        uVar4 = uVar4 + 1;
        ppAVar5 = ppAVar5 + 1;
      }
      pAVar2 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
      this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                   ,(MethodInfo *)0x0);
        if (pAVar2 != (AppDomain *)0x0) {
          mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
                    (pAVar2,(AssemblyLoadEventHandler *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      ppIStack3 = &TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector;
      func_?();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (pIVar1 == (InjectionDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar5 = pIVar1->klass;
    ppIStack3 = (InjectionDetector__Class **)(pIVar5->vtable).StopDetectionInternal.method;
    (*(pIVar5->vtable).StopDetectionInternal.methodPtr)();
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetectionInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__AssemblyLoadEventHandler);
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._.started == 0) {
    return;
  }
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__AssemblyLoadEventHandler);
  if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0), this_00 != (AppDomain *)0x0)) {
    mscorlib.dll::System::AppDomain::AppDomain_remove_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    func_?(&(this->fields)._.detectionAction);
    (this->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
    func_?(&(this->fields).detectionActionWithArgument,0);
    (this->fields)._.isRunning = 0;
    (this->fields)._.started = 0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    func_?(&
                    CodeStage__AntiCheat__Detectors__InjectionDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::InjectionDetector>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (GameObject *)func_?();
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar3,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar3;
      func_?();
    }
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if (pGVar3 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pIVar1 = (InjectionDetector *)(*pcVar4)();
      return pIVar1;
    }
    pIVar1 = (InjectionDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__InjectionDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::InjectionDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
    _Instance_k__BackingField = pIVar1;
    func_?();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
  _Instance_k__BackingField = value;
  func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
                   _Instance_k__BackingField,unaff_EBP);
  return;
}

