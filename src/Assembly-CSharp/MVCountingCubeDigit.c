
/* Void Awake() */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_Awake
               (MVCountingCubeDigit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  source = (this->fields).CountingCubeDigitMaterial;
  this_00 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,source,(MethodInfo *)0x0);
  if (obj == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,this_00,0,in_R9,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (this_00 == (Material *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (this_00->fields)._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,pvVar3);
  return;
}


/* Void SetMaterialOffset() */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_SetMaterialOffset
               (MVCountingCubeDigit *this,MethodInfo *method)

{
  pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MeshRenderer *)0x0) &&
     (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         ((Renderer *)pMVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                      (pMVar2,(MethodInfo *)0x0);
    fVar4 = (float)((uint)((float)(this->fields)._number / _UNK_?) ^ _UNK_?);
    pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MeshRenderer *)0x0) &&
       (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
      fStackX_18 = VVar3.x;
      VVar3.y = fVar4;
      VVar3.x = fStackX_18;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      name = UnityEngine.CoreModule.dll::UnityEngine::Material::
             Material_GetFirstPropertyNameIdByAttribute
                       (pMVar2,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0);
      if (name < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__Material);
        }
        name = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                (pMVar2,name,VVar3,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MeshRenderer get_MeshRenderer() */

MeshRenderer *
Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
          (MVCountingCubeDigit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
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
  if (pMVar1 != (MeshRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pMVar1 = (MeshRenderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).meshRenderer = pMVar1;
  if (bVar2) {
    return pMVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).meshRenderer >> 0xc);
  puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar5 = *puVar4;
    LOCK();
    uVar6 = *puVar4;
    if (uVar5 == uVar6) {
      *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (uVar5 != uVar6);
code_?:
  return (this->fields).meshRenderer;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_set_Number
               (MVCountingCubeDigit *this,int32_t value,MethodInfo *method)

{
  (this->fields)._number = value;
  pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MeshRenderer *)0x0) &&
     (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         ((Renderer *)pMVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                      (pMVar2,(MethodInfo *)0x0);
    fVar4 = (float)((uint)((float)(this->fields)._number / _UNK_?) ^ _UNK_?);
    pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MeshRenderer *)0x0) &&
       (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
      fStackX_8 = VVar3.x;
      VVar3.y = fVar4;
      VVar3.x = fStackX_8;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      name = UnityEngine.CoreModule.dll::UnityEngine::Material::
             Material_GetFirstPropertyNameIdByAttribute
                       (pMVar2,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0);
      if (name < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__Material);
        }
        name = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                (pMVar2,name,VVar3,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

