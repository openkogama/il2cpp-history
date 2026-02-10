
/* Boolean AssemblyAllowed(Assembly) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_AssemblyAllowed(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((ass != (Assembly *)0x0) &&
     (lVar1 = (*(ass->klass->vtable).GetName_1.methodPtr)(ass,(ass->klass->vtable).GetName_1.method)
     , lVar1 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    iVar2 = InjectionDetector_GetAssemblyHash(this,ass,(MethodInfo *)0x0);
    pIVar3 = (this->fields).allowedAssemblies;
    uVar4 = 0;
    if (pIVar3 != (InjectionDetector_AllowedAssembly__Array *)0x0) {
      lVar5 = 0x20;
      do {
        if ((int)pIVar3->max_length <= (int)uVar4) {
          return 0;
        }
        pIVar3 = (this->fields).allowedAssemblies;
        if (pIVar3 == (InjectionDetector_AllowedAssembly__Array *)0x0) break;
        if ((uint)pIVar3->max_length <= uVar4) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        lVar8 = *(longlong *)((longlong)pIVar3->vector + lVar5 + -0x20);
        if (lVar8 == 0) break;
        lVar9 = *(longlong *)(lVar8 + 0x10);
        if ((lVar9 == lVar1) ||
           ((((lVar9 != 0 && (lVar1 != 0)) && (*(int *)(lVar9 + 0x10) == *(int *)(lVar1 + 0x10))) &&
            (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)(lVar9 + 0x14),(uint8_t *)(lVar1 + 0x14),
                                (longlong)*(int *)(lVar9 + 0x10) * 2,(MethodInfo *)0x0), bVar7 != 0)
            ))) {
          pMVar10 = int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_;
          lVar8 = *(longlong *)(lVar8 + 0x18);
          if ((int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_->field7_0x38).
              rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
          }
          if (lVar8 == 0) {
            uVar11 = func_?(&TypeInfo__System__ArgumentNullException);
            this_00 = (ArgumentNullException *)func_?(uVar11);
            paramName = (String *)func_?(&StringLiteral_array);
            mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                      (this_00,paramName,(MethodInfo *)0x0);
            FUN_?(this_00,pMVar10);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          iVar12 = FUN_?(lVar8,iVar2,0,*(undefined4 *)(lVar8 + 0x18),
                                (pMVar10->field7_0x38).rgctx_data[2].rgctxDataDummy);
          if (iVar12 != -1) {
            return 1;
          }
        }
        pIVar3 = (this->fields).allowedAssemblies;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (pIVar3 != (InjectionDetector_AllowedAssembly__Array *)0x0);
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Awake(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Injection_Detector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).Init.methodPtr)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Injection_Detector,
                     (this->klass->vtable).Init.method);
  if (cVar1 != '\0') {
    FUN_?(this);
  }
  b = (Delegate *)
      FUN_?(
                   TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                   );
  FUN_?(b,this);
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  a = TypeInfo__UnityEngine__SceneManagement__SceneManager->static_fields->sceneLoaded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pUVar3 = 
    TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)0x0;
    }
    else {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)FUN_?(pDVar2,
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                               );
      if (pUVar4 == (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                     *)0x0) {
        FUN_?(pDVar2,pUVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
    }
    ppUVar6 = &TypeInfo__UnityEngine__SceneManagement__SceneManager->static_fields->sceneLoaded;
    LOCK();
    pUVar7 = *ppUVar6;
    bVar8 = a == pUVar7;
    if (bVar8) {
      *ppUVar6 = pUVar4;
      pUVar7 = a;
    }
    UNLOCK();
    pUVar4 = a;
    if (!bVar8) {
      pUVar4 = pUVar7;
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)ppUVar6 >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    bVar8 = pUVar4 != a;
    a = pUVar4;
  } while (bVar8);
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InjectionDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
               _Instance_k__BackingField;
      if (pIVar1 != (InjectionDetector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pIVar1->klass->vtable).DisposeInternal.methodPtr)
                  (pIVar1,(pIVar1->klass->vtable).DisposeInternal.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_DisposeInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_DisposeInternal((ActDetectorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (InjectionDetector *)0x0 || pIVar1 != (InjectionDetector *)0x0) {
    if (this == (InjectionDetector *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pIVar1 == (InjectionDetector *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = (pIVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pIVar1 == (InjectionDetector *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar3 = pIVar1 == this;
    }
    if (!bVar3) {
      return;
    }
  }
  FUN_?(0);
  return;
}


/* Boolean FindInjectionInCurrentAssemblies(String ByRef) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_FindInjectionInCurrentAssemblies
               (InjectionDetector *this,String **cause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_no_assemblies);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  bVar2 = iRam_? != 0;
  *cause = (String *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)cause >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar7 = 0;
  plVar8 = (longlong *)FUN_?();
  if (*plVar8 == 0) {
    this_00 = (AppDomain *)FUN_?(uRam_?);
    *plVar8 = (longlong)this_00;
    if (this_00 == (AppDomain *)0x0) goto code_?;
  }
  else {
    this_00 = (AppDomain *)*plVar8;
  }
  pAVar9 = mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(this_00,(MethodInfo *)0x0);
  if (pAVar9 != (Assembly__Array *)0x0) {
    if (pAVar9->max_length == 0) {
      bVar2 = iRam_? != 0;
      *cause = StringLiteral_no_assemblies;
      if (bVar2) {
        uVar1 = (uint)((ulonglong)cause >> 0xc);
        lVar4 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
code_?:
      bVar7 = 1;
    }
    else {
      ppAVar10 = pAVar9->vector;
      for (; (int)uVar1 < (int)pAVar9->max_length; uVar1 = uVar1 + 1) {
        if ((uint)pAVar9->max_length <= uVar1) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          bVar7 = (*pcVar11)();
          return bVar7;
        }
        ass = *ppAVar10;
        bVar12 = InjectionDetector_AssemblyAllowed(this,ass,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          if (ass == (Assembly *)0x0) goto code_?;
          pSVar13 = (String *)
                   (*(ass->klass->vtable).get_FullName.methodPtr)
                             (ass,(ass->klass->vtable).get_FullName.method);
          *cause = pSVar13;
          func_?(cause);
          goto code_?;
        }
        ppAVar10 = ppAVar10 + 1;
      }
    }
    return bVar7;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar7 = (*pcVar11)();
  return bVar7;
}


/* Int32 GetAssemblyHash(Assembly) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
        InjectionDetector_GetAssemblyHash(InjectionDetector *this,Assembly *ass,MethodInfo *method)

{
  if (((ass != (Assembly *)0x0) &&
      (this_00 = (AssemblyName *)(*(ass->klass->vtable).GetName_1.methodPtr)(ass),
      this_00 != (AssemblyName *)0x0)) &&
     (pBVar1 = mscorlib.dll::System::Reflection::AssemblyName::AssemblyName_GetPublicKeyToken
                         (this_00,(MethodInfo *)0x0), pBVar1 != (Byte__Array *)0x0)) {
    str0_00 = (this_00->fields).name;
    uVar2 = 0;
    uVar3 = 0;
    if (7 < (int)pBVar1->max_length) {
      str0 = ::StringLiteral__;
      uVar4 = uVar2;
      uVar5 = uVar2;
      if (cRam_? == '\0') {
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        str0 = ::StringLiteral__;
      }
      do {
        if ((uint)pBVar1->max_length <= (uint)uVar4) {
code_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          iVar7 = (*pcVar6)();
          return iVar7;
        }
        pSVar8 = (this->fields).hexTable;
        if (pSVar8 == (String__Array *)0x0) goto code_?;
        if ((uint)pSVar8->max_length <= (uint)pBVar1->vector[uVar5]) goto code_?;
        str0 = mscorlib.dll::System::String::String_Concat_4
                         (str0,pSVar8->vector[pBVar1->vector[uVar5]],(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        uVar4 = (ulonglong)((uint)uVar4 + 1);
      } while ((longlong)uVar5 < 8);
      str0_00 = mscorlib.dll::System::String::String_Concat_4(str0_00,str0,(MethodInfo *)0x0);
    }
    if (str0_00 != (String *)0x0) {
      uVar9 = (str0_00->fields)._stringLength;
      if (0 < (int)uVar9) {
        puVar10 = &(str0_00->fields)._firstChar;
        uVar4 = uVar2;
        uVar5 = uVar2;
        do {
          if (uVar9 <= (uint)uVar2) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                      ((MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            iVar7 = (*pcVar6)();
            return iVar7;
          }
          uVar2 = (ulonglong)((uint)uVar2 + 1);
          uVar5 = uVar5 + 1;
          uVar3 = ((uint)*puVar10 + (int)uVar4) * 0x401;
          puVar10 = puVar10 + 1;
          uVar3 = (int)uVar3 >> 6 ^ uVar3;
          uVar4 = (ulonglong)uVar3;
        } while ((longlong)uVar5 < (longlong)(int)uVar9);
      }
      return ((int)(uVar3 * 9) >> 0xb ^ uVar3 * 9) * 0x8001;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void LoadAndParseAllowedAssemblies() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_LoadAndParseAllowedAssemblies(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__BinaryReader);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__MemoryStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__TextAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__TextAsset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fndid);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x2);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Elina);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__UnityEngine__TextAsset;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 == (Il2CppType *)0x0) {
    systemTypeInstance = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    systemTypeInstance = (Type *)FUN_?(lVar2 + 0x20);
  }
  this_00 = (TextAsset_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load_1
                      (StringLiteral_fndid,systemTypeInstance,(MethodInfo *)0x0);
  if (this_00 != (TextAsset_1 *)0x0) {
    bVar3 = (TypeInfo__UnityEngine__TextAsset->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar3) ||
       ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__TextAsset)) {
      FUN_?(this_00);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (TextAsset_1 *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar5 = (String__Array *)FUN_?(TypeInfo__System__String);
      pSStack_6 = pSVar5;
      if (pSVar5 != (String__Array *)0x0) {
        FUN_?(pSVar5,0,::StringLiteral__);
        buffer = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_1_get_bytes
                           (this_00,(MethodInfo *)0x0);
        this_01 = (MemoryStream *)FUN_?(TypeInfo__System__IO__MemoryStream);
        mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_3
                  (this_01,buffer,1,(MethodInfo *)0x0);
        this_02 = (BinaryReader *)FUN_?(TypeInfo__System__IO__BinaryReader);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Text__UTF8Encoding);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        encoding = (Encoding *)FUN_?(TypeInfo__System__Text__UTF8Encoding);
        (encoding->fields).m_isReadOnly = 1;
        (encoding->fields).m_codePage = 0xfde9;
        (*(encoding->klass->vtable).SetDefaultFallbacks.methodPtr)
                  (encoding,(encoding->klass->vtable).SetDefaultFallbacks.method);
        *(undefined2 *)&encoding[1].klass = 0;
        mscorlib.dll::System::IO::BinaryReader::BinaryReader__ctor_2
                  (this_02,(Stream *)this_01,encoding,0,(MethodInfo *)0x0);
        if (this_02 != (BinaryReader *)0x0) {
          iVar7 = (*(this_02->klass->vtable).ReadInt32.methodPtr)
                            (this_02,(this_02->klass->vtable).ReadInt32.method);
          pIVar8 = (InjectionDetector_AllowedAssembly__Array *)
                    FUN_?(TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly
                                  ,iVar7);
          bVar9 = iRam_? != 0;
          (this->fields).allowedAssemblies = pIVar8;
          if (bVar9) {
            uVar10 = (uint)((ulonglong)&(this->fields).allowedAssemblies >> 0xc);
            lVar2 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar2 + 0xADDR);
              puVar12 = (ulonglong *)(lVar2 + 0xADDR);
              LOCK();
              bVar9 = uVar11 == *puVar12;
              if (bVar9) {
                *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          uVar10 = 0;
          if (0 < iVar7) {
            lStackX_18 = 0;
            lStackX_20 = 0x20;
            RStack_13._pointer._value = (uint16_t *)(longlong)iVar7;
            do {
              pSVar14 = (String *)
                        (*(this_02->klass->vtable).ReadString.methodPtr)
                                  (this_02,(this_02->klass->vtable).ReadString.method);
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              pSVar14 = ObscuredTypes::ObscuredString::ObscuredString_EncryptDecrypt_1
                                  (pSVar14,StringLiteral_Elina,(MethodInfo *)0x0);
              if ((pSVar14 == (String *)0x0) ||
                 (pSVar5 = mscorlib.dll::System::String::String_SplitInternal_1
                                      (pSVar14,(String *)0x0,pSVar5,0x7fffffff,
                                       StringSplitOptions__Enum_RemoveEmptyEntries,(MethodInfo *)0x0
                                      ), pSVar5 == (String__Array *)0x0))
              goto code_?;
              iVar7 = (int)pSVar5->max_length;
              if (iVar7 < 2) {
                (this->fields).signaturesAreNotGenuine = 1;
                (*(this_02->klass->vtable).Close.methodPtr)
                          (this_02,(this_02->klass->vtable).Close.method);
                if (this_01 != (MemoryStream *)0x0) {
                  (*(this_01->klass->vtable).Close.methodPtr)
                            (this_01,(this_01->klass->vtable).Close.method);
                  return;
                }
                goto code_?;
              }
              if ((int)pSVar5->max_length == 0) goto code_?;
              pSVar14 = pSVar5->vector[0];
              item2 = (Object *)FUN_?(TypeInfo__System__Int32);
              uVar15 = 1;
              ppSVar16 = pSVar5->vector;
              lVar2 = 1;
              pOVar17 = item2 + 2;
              do {
                ppSVar16 = ppSVar16 + 1;
                if ((uint)pSVar5->max_length <= uVar15) goto code_?;
                iVar18 = mscorlib.dll::System::Int32::Int32_Parse(*ppSVar16,(MethodInfo *)0x0);
                if (item2 == (Object *)0x0) goto code_?;
                if (*(uint *)&item2[1].monitor <= uVar15 - 1) goto code_?;
                *(int32_t *)&pOVar17->klass = iVar18;
                uVar15 = uVar15 + 1;
                pOVar17 = (Object *)((longlong)&pOVar17->klass + 4);
                lVar2 = lVar2 + 1;
              } while (lVar2 < iVar7);
              pIVar8 = (this->fields).allowedAssemblies;
              this_03 = (Tuple_2_Object_Object_ *)
                        FUN_?(
                                     TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__AllowedAssembly
                                     );
              mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                        (this_03,(Object *)pSVar14,item2,(MethodInfo *)0x0);
              if (pIVar8 == (InjectionDetector_AllowedAssembly__Array *)0x0)
              goto code_?;
              if ((this_03 != (Tuple_2_Object_Object_ *)0x0) &&
                 (lVar2 = FUN_?(this_03,(pIVar8->klass->_0).element_class), lVar2 == 0))
              {
                uVar19 = FUN_?();
                FUN_?(uVar19,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((uint)pIVar8->max_length <= uVar10) goto code_?;
              *(Tuple_2_Object_Object_ **)((longlong)pIVar8->vector + lStackX_20 + -0x20) = this_03
              ;
              func_?(pIVar8->vector + (int)uVar10);
              lStackX_20 = lStackX_20 + 8;
              lStackX_18 = lStackX_18 + 1;
              uVar10 = uVar10 + 1;
              pSVar5 = pSStack_6;
            } while (lStackX_18 < (longlong)RStack_13._pointer._value);
          }
          lVar2 = 0x20;
          (*(this_02->klass->vtable).Close.methodPtr)(this_02,(this_02->klass->vtable).Close.method)
          ;
          if (this_01 != (MemoryStream *)0x0) {
            (*(this_01->klass->vtable).Close.methodPtr)
                      (this_01,(this_01->klass->vtable).Close.method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__ResourcesAPI);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__ResourcesAPI->_1).field_0x1c == 0) {
              FUN_?();
            }
            pRVar20 = UnityEngine.CoreModule.dll::UnityEngine::ResourcesAPI::
                      ResourcesAPI_get_ActiveAPI((MethodInfo *)0x0);
            if (pRVar20 != (ResourcesAPI *)0x0) {
              (*(pRVar20->klass->vtable).UnloadAsset.methodPtr)(pRVar20,this_00);
              pSVar5 = (String__Array *)FUN_?(TypeInfo__System__String,0x100);
              bVar9 = iRam_? != 0;
              (this->fields).hexTable = pSVar5;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&(this->fields).hexTable >> 0xc);
                lVar21 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                do {
                  uVar11 = *(ulonglong *)(lVar21 + 0xADDR);
                  puVar12 = (ulonglong *)(lVar21 + 0xADDR);
                  LOCK();
                  bVar9 = uVar11 == *puVar12;
                  if (bVar9) {
                    *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              uVar10 = 0;
              while( true ) {
                pSVar14 = StringLiteral_x2;
                pSVar5 = (this->fields).hexTable;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                iVar18 = 0;
                puVar22 = (uint16_t *)0x0;
                if (pSVar14 != (String *)0x0) {
                  pSStack_6 = (String__Array *)&(pSVar14->fields)._firstChar;
                  uStack_23 = 0;
                  iVar18 = (pSVar14->fields)._stringLength;
                  iStack_24 = iVar18;
                  puVar22 = (uint16_t *)pSStack_6;
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                RStack_13._12_4_ = 0;
                RStack_13._pointer._value = puVar22;
                RStack_13._length = iVar18;
                pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar10,&RStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                if (pSVar5 == (String__Array *)0x0) break;
                if ((uint)pSVar5->max_length <= uVar10) {
code_?:
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar9 = iRam_? != 0;
                *(String **)((longlong)pSVar5->vector + lVar2 + -0x20) = pSVar14;
                if (bVar9) {
                  uVar15 = (uint)((ulonglong)(pSVar5->vector + uVar10) >> 0xc);
                  lVar21 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar11 = *(ulonglong *)(lVar21 + 0xADDR);
                    puVar12 = (ulonglong *)(lVar21 + 0xADDR);
                    LOCK();
                    bVar9 = uVar11 == *puVar12;
                    if (bVar9) {
                      *puVar12 = uVar11 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar9);
                }
                uVar10 = uVar10 + 1;
                lVar2 = lVar2 + 8;
                if (0xff < (int)uVar10) {
                  return;
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->fields).signaturesAreNotGenuine = 1;
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
    (*(pUVar2->fields)._._.invoke_impl)((pUVar2->fields)._._.method_code);
  }
  if ((this->fields)._.detectionEventHasListener != 0) {
    this_00 = (this->fields)._.detectionEvent;
    if (this_00 == (UnityEvent *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pIVar4 = this->klass;
  if ((this->fields)._.autoDispose == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pIVar4->vtable).StopDetectionInternal.methodPtr)
              (this,(pIVar4->vtable).StopDetectionInternal.method);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar4->vtable).DisposeInternal.methodPtr)(this,(pIVar4->vtable).DisposeInternal.method);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnDestroy(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.keepAlive == 0) {
    if (TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
        instancesInScene < 2) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).DisposeInternal.methodPtr)
                (this,(this->klass->vtable).DisposeInternal.method);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this != (InjectionDetector *)0x0 || pIVar1 != (InjectionDetector *)0x0) {
      if (this == (InjectionDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pIVar1 == (InjectionDetector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = (pIVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pIVar1 == (InjectionDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pIVar1 == this;
      }
      if (!bVar3) {
        (*(this->klass->vtable).DisposeInternal.methodPtr)
                  (this,(this->klass->vtable).DisposeInternal.method);
      }
    }
  }
  return;
}


/* Void OnLevelWasLoadedNew(Scene, LoadSceneMode) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_OnLevelWasLoadedNew
               (InjectionDetector *this,Scene scene,LoadSceneMode__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.keepAlive == 0) {
    if (TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
        instancesInScene < 2) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).DisposeInternal.methodPtr)
                (this,(this->klass->vtable).DisposeInternal.method);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
             _Instance_k__BackingField;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this != (InjectionDetector *)0x0 || pIVar1 != (InjectionDetector *)0x0) {
      if (this == (InjectionDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pIVar1 == (InjectionDetector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = (pIVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pIVar1 == (InjectionDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pIVar1 == this;
      }
      if (!bVar3) {
        (*(this->klass->vtable).DisposeInternal.methodPtr)
                  (this,(this->klass->vtable).DisposeInternal.method);
      }
    }
  }
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
      cause = (String *)
              (*(pAVar2->klass->vtable).get_FullName.methodPtr)
                        (pAVar2,(pAVar2->klass->vtable).get_FullName.method);
      InjectionDetector_OnCheatingDetected(this,cause,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PauseDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_PauseDetector(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.isRunning = 0;
  plVar1 = (longlong *)FUN_?();
  if (*plVar1 == 0) {
    lVar2 = FUN_?(uRam_?);
    *plVar1 = lVar2;
    this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
    System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
              (this_00,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
               ,(MethodInfo *)0x0);
    if (lVar2 == 0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar2 = *plVar1;
    this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
    System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
              (this_00,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
               ,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)(lVar2 + 0x38);
  source = *(Delegate **)(lVar2 + 0x38);
  do {
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (source,(Delegate *)this_00,(MethodInfo *)0x0);
    pDVar5 = (Delegate *)0x0;
    if (pDVar4 != (Delegate *)0x0) {
      if ((AssemblyLoadEventHandler__Class *)pDVar4->klass ==
          TypeInfo__System__AssemblyLoadEventHandler) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) {
        FUN_?(pDVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pDVar4 = (Delegate *)*plVar1;
    bVar6 = source == pDVar4;
    if (bVar6) {
      *plVar1 = (longlong)pDVar5;
      pDVar4 = source;
    }
    UNLOCK();
    pDVar5 = source;
    if (!bVar6) {
      pDVar5 = pDVar4;
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)plVar1 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    bVar6 = pDVar5 != source;
    source = pDVar5;
  } while (bVar6);
  return;
}


/* String PublicKeyTokenToString(Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
         InjectionDetector_PublicKeyTokenToString
                   (InjectionDetector *this,Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pSVar2 = ::StringLiteral__;
  uVar3 = uVar1;
  while (bytes != (Byte__Array *)0x0) {
    if ((uint)bytes->max_length <= (uint)uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar4)();
      return pSVar2;
    }
    pSVar5 = (this->fields).hexTable;
    if (pSVar5 == (String__Array *)0x0) break;
    if ((uint)pSVar5->max_length <= (uint)bytes->vector[uVar1]) goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,pSVar5->vector[bytes->vector[uVar1]],(MethodInfo *)0x0);
    uVar3 = (ulonglong)((uint)uVar3 + 1);
    uVar1 = uVar1 + 1;
    if (7 < (longlong)uVar1) {
      return pSVar2;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
}


/* Void ResumeDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_ResumeDetector(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((this->fields)._.detectionAction != (UnityAction *)0x0) ||
      ((this->fields).detectionActionWithArgument != (UnityAction_1_System_String_ *)0x0)) ||
     ((this->fields)._.detectionEventHasListener != 0)) {
    (this->fields)._.isRunning = 1;
    plVar1 = (longlong *)FUN_?();
    if (*plVar1 == 0) {
      this_01 = (AppDomain *)FUN_?(uRam_?);
      *plVar1 = (longlong)this_01;
      this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler)
      ;
      System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                (this_00,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 == (AppDomain *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_01 = (AppDomain *)*plVar1;
      this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler)
      ;
      System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                (this_00,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
              (this_01,(AssemblyLoadEventHandler *)this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__can_t);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InjectionDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
               _Instance_k__BackingField;
      if (pIVar1 == (InjectionDetector *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__AssemblyLoadEventHandler,0,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__ACTk__Injection_Detector__alrea);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__ACTk__Injection_Detector__disab);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__ACTk__Injection_Detector__was_s);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_signatures);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__ACTk__Injection_Detector__has_p);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apSStackX_8[0] = (String *)0x0;
      if ((pIVar1->fields)._.isRunning == 0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pIVar1,(MethodInfo *)0x0);
        iVar4 = iRam_?;
        if (bVar3 != 0) {
          if ((pIVar1->fields)._.detectionEventHasListener == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                      ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)pIVar1,
                       (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
            return;
          }
          (pIVar1->fields)._.detectionAction = (UnityAction *)0x0;
          if (iVar4 != 0) {
            uVar5 = (uint)((ulonglong)&(pIVar1->fields)._.detectionAction >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
              iVar4 = iRam_?;
            } while (!bVar9);
          }
          (pIVar1->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
          if (iVar4 != 0) {
            uVar5 = (uint)((ulonglong)&(pIVar1->fields).detectionActionWithArgument >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pIVar10 = (pIVar1->fields).allowedAssemblies;
          (pIVar1->fields)._.isRunning = 1;
          (pIVar1->fields)._.started = 1;
          if (pIVar10 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
            InjectionDetector_LoadAndParseAllowedAssemblies(pIVar1,(MethodInfo *)0x0);
          }
          if ((pIVar1->fields).signaturesAreNotGenuine != 0) {
            InjectionDetector_OnCheatingDetected(pIVar1,StringLiteral_signatures,(MethodInfo *)0x0);
            return;
          }
          bVar3 = InjectionDetector_FindInjectionInCurrentAssemblies
                            (pIVar1,apSStackX_8,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            InjectionDetector_OnCheatingDetected(pIVar1,apSStackX_8[0],(MethodInfo *)0x0);
            return;
          }
          this = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
          this_00 = (MergeFailedEventHandler *)
                    FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
          System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                    (this_00,(Object *)pIVar1,
                     MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                     ,(MethodInfo *)0x0);
          if (this != (AppDomain *)0x0) {
            mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
                      (this,(AssemblyLoadEventHandler *)this_00,(MethodInfo *)0x0);
            return;
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pSVar11 = StringLiteral__ACTk__Injection_Detector__disab;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar11 = StringLiteral__ACTk__Injection_Detector__disab;
        }
      }
      else {
        pSVar11 = StringLiteral__ACTk__Injection_Detector__alrea;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar11 = StringLiteral__ACTk__Injection_Detector__alrea;
        }
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)pSVar11,(Object_1 *)pIVar1,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = StringLiteral__ACTk__Injection_Detector__can_t;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar12 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,0,pSVar11);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetectionAutomatically() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetectionAutomatically(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler,0,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__alrea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__disab);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__was_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_signatures);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__has_p);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)0x0;
  if ((this->fields)._.isRunning == 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    iVar2 = iRam_?;
    if (bVar1 != 0) {
      if ((this->fields)._.detectionEventHasListener == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)this,
                   (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
        return;
      }
      (this->fields)._.detectionAction = (UnityAction *)0x0;
      if (iVar2 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar2 = iRam_?;
        } while (!bVar7);
      }
      (this->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
      if (iVar2 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).detectionActionWithArgument >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pIVar8 = (this->fields).allowedAssemblies;
      (this->fields)._.isRunning = 1;
      (this->fields)._.started = 1;
      if (pIVar8 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
        InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
      }
      if ((this->fields).signaturesAreNotGenuine != 0) {
        InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
        return;
      }
      bVar1 = InjectionDetector_FindInjectionInCurrentAssemblies(this,&pSStackX_8,(MethodInfo *)0x0)
      ;
      if (bVar1 != 0) {
        InjectionDetector_OnCheatingDetected(this,pSStackX_8,(MethodInfo *)0x0);
        return;
      }
      this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
      this_01 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler)
      ;
      System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                (this_01,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (AppDomain *)0x0) {
        mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
                  (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    message = StringLiteral__ACTk__Injection_Detector__disab;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__disab;
    }
  }
  else {
    message = StringLiteral__ACTk__Injection_Detector__alrea;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__alrea;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
            ((Object *)message,(Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void StartDetectionInternal(UnityAction, UnityAction`1[System.String]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetectionInternal
               (InjectionDetector *this,UnityAction *callback,
               UnityAction_1_System_String_ *callbackWithArgument,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__alrea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__disab);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__was_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_signatures);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__has_p);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)0x0;
  if ((this->fields)._.isRunning != 0) {
    message = StringLiteral__ACTk__Injection_Detector__alrea;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__alrea;
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)message,(Object_1 *)this,(MethodInfo *)0x0);
    return;
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    message = StringLiteral__ACTk__Injection_Detector__disab;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__disab;
    }
    goto code_?;
  }
  if ((callback != (UnityAction *)0x0) ||
     (callbackWithArgument != (UnityAction_1_System_String_ *)0x0)) {
    if ((this->fields)._.detectionEventHasListener != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral__ACTk__Injection_Detector__has_p,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    if ((callback != (UnityAction *)0x0) ||
       (callbackWithArgument != (UnityAction_1_System_String_ *)0x0)) goto code_?;
  }
  if ((this->fields)._.detectionEventHasListener == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)this,
               (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  iVar2 = iRam_?;
  (this->fields)._.detectionAction = callback;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).detectionActionWithArgument = callbackWithArgument;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).detectionActionWithArgument >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pIVar8 = (this->fields).allowedAssemblies;
  (this->fields)._.isRunning = 1;
  (this->fields)._.started = 1;
  if (pIVar8 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
    InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
  }
  if ((this->fields).signaturesAreNotGenuine != 0) {
    InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
    return;
  }
  bVar1 = InjectionDetector_FindInjectionInCurrentAssemblies(this,&pSStackX_8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    InjectionDetector_OnCheatingDetected(this,pSStackX_8,(MethodInfo *)0x0);
    return;
  }
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
  System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
            (this_01,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 == (AppDomain *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
            (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
  return;
}


/* Void StartDetection(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection_1(UnityAction *callback,MethodInfo *method)

{
  this = InjectionDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this == (InjectionDetector *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler,callback,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__alrea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__disab);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__was_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_signatures);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__has_p);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStackX_8[0] = (String *)0x0;
  if ((this->fields)._.isRunning != 0) {
    message = StringLiteral__ACTk__Injection_Detector__alrea;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__alrea;
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)message,(Object_1 *)this,(MethodInfo *)0x0);
    return;
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    message = StringLiteral__ACTk__Injection_Detector__disab;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__disab;
    }
    goto code_?;
  }
  if (callback != (UnityAction *)0x0) {
    if ((this->fields)._.detectionEventHasListener != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral__ACTk__Injection_Detector__has_p,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    if (callback != (UnityAction *)0x0) goto code_?;
  }
  if ((this->fields)._.detectionEventHasListener == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)this,
               (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  iVar3 = iRam_?;
  (this->fields)._.detectionAction = callback;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).detectionActionWithArgument >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pIVar9 = (this->fields).allowedAssemblies;
  (this->fields)._.isRunning = 1;
  (this->fields)._.started = 1;
  if (pIVar9 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
    InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
  }
  if ((this->fields).signaturesAreNotGenuine != 0) {
    InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
    return;
  }
  bVar2 = InjectionDetector_FindInjectionInCurrentAssemblies(this,apSStackX_8,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    InjectionDetector_OnCheatingDetected(this,apSStackX_8[0],(MethodInfo *)0x0);
    return;
  }
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
  System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
            (this_01,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (AppDomain *)0x0) {
    mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartDetection(UnityAction`1[System.String]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StartDetection_2(UnityAction_1_System_String_ *callback,MethodInfo *method)

{
  this = InjectionDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this == (InjectionDetector *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler,0,callback,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__alrea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__disab);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__was_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_signatures);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Injection_Detector__has_p);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStackX_8[0] = (String *)0x0;
  if ((this->fields)._.isRunning != 0) {
    message = StringLiteral__ACTk__Injection_Detector__alrea;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__alrea;
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)message,(Object_1 *)this,(MethodInfo *)0x0);
    return;
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    message = StringLiteral__ACTk__Injection_Detector__disab;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Injection_Detector__disab;
    }
    goto code_?;
  }
  if (callback != (UnityAction_1_System_String_ *)0x0) {
    if ((this->fields)._.detectionEventHasListener != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral__ACTk__Injection_Detector__has_p,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    if (callback != (UnityAction_1_System_String_ *)0x0) goto code_?;
  }
  if ((this->fields)._.detectionEventHasListener == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral__ACTk__Injection_Detector__was_s,(Object_1 *)this,
               (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  iVar3 = iRam_?;
  (this->fields)._.detectionAction = (UnityAction *)0x0;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).detectionActionWithArgument = callback;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).detectionActionWithArgument >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pIVar9 = (this->fields).allowedAssemblies;
  (this->fields)._.isRunning = 1;
  (this->fields)._.started = 1;
  if (pIVar9 == (InjectionDetector_AllowedAssembly__Array *)0x0) {
    InjectionDetector_LoadAndParseAllowedAssemblies(this,(MethodInfo *)0x0);
  }
  if ((this->fields).signaturesAreNotGenuine != 0) {
    InjectionDetector_OnCheatingDetected(this,StringLiteral_signatures,(MethodInfo *)0x0);
    return;
  }
  bVar2 = InjectionDetector_FindInjectionInCurrentAssemblies(this,apSStackX_8,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    InjectionDetector_OnCheatingDetected(this,apSStackX_8[0],(MethodInfo *)0x0);
    return;
  }
  this_00 = mscorlib.dll::System::AppDomain::AppDomain_get_CurrentDomain((MethodInfo *)0x0);
  this_01 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler);
  System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
            (this_01,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (AppDomain *)0x0) {
    mscorlib.dll::System::AppDomain::AppDomain_add_AssemblyLoad
              (this_00,(AssemblyLoadEventHandler *)this_01,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InjectionDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
               _Instance_k__BackingField;
      if (pIVar1 != (InjectionDetector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pIVar1->klass->vtable).StopDetectionInternal.methodPtr)
                  (pIVar1,(pIVar1->klass->vtable).StopDetectionInternal.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector_StopDetectionInternal(InjectionDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__AssemblyLoadEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.started != 0) {
    plVar1 = (longlong *)FUN_?();
    if (*plVar1 == 0) {
      this_01 = (AppDomain *)FUN_?(uRam_?);
      *plVar1 = (longlong)this_01;
      this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler)
      ;
      System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                (this_00,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 == (AppDomain *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_01 = (AppDomain *)*plVar1;
      this_00 = (MergeFailedEventHandler *)FUN_?(TypeInfo__System__AssemblyLoadEventHandler)
      ;
      System.Data.dll::System::Data::MergeFailedEventHandler::MergeFailedEventHandler__ctor
                (this_00,(Object *)this,
                 MethodInfo__CodeStage__AntiCheat__Detectors__InjectionDetector__OnNewAssemblyLoaded_System__Object__System__AssemblyLoadEventArgs_
                 ,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::AppDomain::AppDomain_remove_AssemblyLoad
              (this_01,(AssemblyLoadEventHandler *)this_00,(MethodInfo *)0x0);
    iVar3 = iRam_?;
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    (this->fields).detectionActionWithArgument = (UnityAction_1_System_String_ *)0x0;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).detectionActionWithArgument >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    (this->fields)._.isRunning = 0;
    (this->fields)._.started = 0;
  }
  return;
}


/* InjectionDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
     InjectionDetector__ctor(InjectionDetector *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._.autoStart = 1;
  (this->fields)._.keepAlive = 1;
  (this->fields)._.autoDispose = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* InjectionDetector get_GetOrCreateInstance() */

InjectionDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
InjectionDetector_get_GetOrCreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CodeStage__AntiCheat__Detectors__InjectionDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::InjectionDetector>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
           _Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar1 != (InjectionDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pGVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar2 == (GameObject *)0x0) {
code_?:
    pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar2,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer =
         pGVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)
                     TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields >>
                    0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pGVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
  if (pGVar2 == (GameObject *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pIVar1 = (InjectionDetector *)(*pcVar8)();
    return pIVar1;
  }
  pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                     (pGVar2,
                      CodeStage__AntiCheat__Detectors__InjectionDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::InjectionDetector>__
                     );
  FUN_?(pOVar9);
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
  _Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
                    _Instance_k__BackingField >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

