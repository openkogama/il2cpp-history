
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__ZWrite,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar1,iVar2,0.0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__ZTest);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__ZTest,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar1,iVar2,_UNK_?,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__CullMode);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__CullMode,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar1,iVar2,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        GizmoSolidMaterial_SetLit(this,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__LightIntensity);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__LightIntensity,(MethodInfo *)0x0);
          uVar3 = _UNK_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                          ,iVar2,_UNK_?,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Material);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pMVar1 == (Material *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (pMVar1->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,iVar2,uVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetColor
               (GizmoSolidMaterial *this,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    CStack_1.r = color->r;
    CStack_1.g = color->g;
    CStack_1.b = color->b;
    CStack_1.a = color->a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_00,StringLiteral__Color,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeBack() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeBack
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CullMode,(MethodInfo *)0x0);
  uVar3 = TypeRef__System__Activator__T._0_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,TypeRef__System__Activator__T._0_4_,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,iVar2,uVar3);
  return;
}


/* Void SetCullModeFront() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeFront
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CullMode,(MethodInfo *)0x0);
  uVar3 = _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,_UNK_?,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,iVar2,uVar3);
  return;
}


/* Void SetCullModeOff() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CullMode,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(pvVar3,iVar2,0);
  return;
}


/* Void SetLightDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
               (GizmoSolidMaterial *this,Vector3 *lightDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightDir);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  VStack_1.x = lightDir->x;
  VStack_1.y = lightDir->y;
  VStack_1.w = 0.0;
  VStack_1.z = lightDir->z;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__LightDir,&VStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLightIntensity(Single) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLightIntensity
               (GizmoSolidMaterial *this,float intensity,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightIntensity,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__LightIntensity,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,intensity,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,intensity);
  return;
}


/* Void SetLit(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLit
               (GizmoSolidMaterial *this,bool isLit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__IsLit,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(pvVar3,iVar2);
  return;
}


/* Void SetPass(Int32) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetPass
               (GizmoSolidMaterial *this,int32_t passIndex,MethodInfo *method)

{
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void SetZTestAlways() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestAlways
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__ZTest,(MethodInfo *)0x0);
  uVar3 = _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,_UNK_?,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,iVar2,uVar3);
  return;
}


/* Void SetZTestEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestEnabled
               (GizmoSolidMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__ZTest,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(pvVar3,iVar2);
  return;
}


/* Void SetZTestLess() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestLess
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__ZTest,(MethodInfo *)0x0);
  uVar3 = TypeRef__System__Activator__T._0_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar2,TypeRef__System__Activator__T._0_4_,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,iVar2,uVar3);
  return;
}


/* Void SetZWriteEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZWriteEnabled
               (GizmoSolidMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__ZWrite,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(pvVar3,iVar2);
  return;
}


/* GizmoSolidMaterial() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial__ctor
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__ZWrite,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar1,iVar2,0.0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__ZTest);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__ZTest,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar1,iVar2,_UNK_?,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__CullMode);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__CullMode,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar1,iVar2,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        GizmoSolidMaterial_SetLit(this,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__LightIntensity);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__LightIntensity,(MethodInfo *)0x0);
          uVar3 = _UNK_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                          ,iVar2,_UNK_?,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Material);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pMVar1 == (Material *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (pMVar1->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,iVar2,uVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_IsLit() */

bool Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                     (StringLiteral__IsLit,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloatImpl
                      (this_00,name,(MethodInfo *)0x0);
    return (int)fVar1 == 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Single get_LightIntensity() */

float Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_LightIntensity
                (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightIntensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__LightIntensity,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*pcRam_?)(pvVar4,iVar3);
  return fVar2;
}


/* Material get_Material() */

Material *
Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_Material
          (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._material;
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
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_00 == (MaterialPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar1 = (Material *)(*pcVar2)();
    return pMVar1;
  }
  pMVar1 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._material = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
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
code_?:
  return (this->fields)._material;
}

