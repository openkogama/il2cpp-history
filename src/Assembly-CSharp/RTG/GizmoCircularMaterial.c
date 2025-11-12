
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::
     GizmoCircularMaterial_ResetValuesToSensibleDefaults
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
      pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__CullMode,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar1,iVar2,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        GizmoCircularMaterial_SetLit(this,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__LightIntensity);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCamera(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
               (GizmoCircularMaterial *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CamLook);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OrthoCam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if ((camera != (Camera *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (aVStack_3,this_00,(MethodInfo *)0x0);
    VStack_4.x = pVVar2->x;
    VStack_4.y = pVVar2->y;
    VStack_4.w = 0.0;
    VStack_4.z = pVVar2->z;
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar1,StringLiteral__CamLook,&VStack_4,(MethodInfo *)0x0);
      pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5);
      if (pMVar1 != (Material *)0x0) {
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__OrthoCam,(MethodInfo *)0x0);
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
        if (pMVar1 == (Material *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar5 = (pMVar1->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,iVar8);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetColor
               (GizmoCircularMaterial *this,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
               (GizmoCircularMaterial *this,float scale,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullAlphaScale,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CullAlphaScale,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,scale,0,uVar1,uVar2);
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
  (*pcRam_?)(pvVar5,iVar4,scale);
  return;
}


/* Void SetCullModeBack() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeBack
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeFront
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeOff
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CullMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCylindricalTorusRadii(Single, Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCylindricalTorusRadii
               (GizmoCircularMaterial *this,float hrzRadius,float vertRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TorusVertRadius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TorusHrzRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType != 2) {
    return;
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__TorusHrzRadius,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar1,iVar2,hrzRadius,(MethodInfo *)0x0);
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__TorusVertRadius,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar1,iVar2,vertRadius,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetLightDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
               (GizmoCircularMaterial *this,Vector3 *lightDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightDir);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLightIntensity
               (GizmoCircularMaterial *this,float intensity,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightIntensity,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLit
               (GizmoCircularMaterial *this,bool isLit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetPass
               (GizmoCircularMaterial *this,int32_t passIndex,MethodInfo *method)

{
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetShapeCenter(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
               (GizmoCircularMaterial *this,Vector3 *center,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CircleCenter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TorusCenter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType == 0) {
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    VStack_2.x = center->x;
    VStack_2.y = center->y;
    VStack_2.w = 0.0;
    VStack_2.z = center->z;
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar1,StringLiteral__CircleCenter,&VStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    VStack_2.x = center->x;
    VStack_2.y = center->y;
    VStack_2.w = 0.0;
    VStack_2.z = center->z;
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar1,StringLiteral__TorusCenter,&VStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetTorusCoreRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
               (GizmoCircularMaterial *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TorusCoreRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._circularType == 1) || ((this->fields)._circularType == 2)) {
    this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (this_00 == (Material *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                     (StringLiteral__TorusCoreRadius,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (this_00,name,radius,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetTorusTubeRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetTorusTubeRadius
               (GizmoCircularMaterial *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TorusTubeRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType == 1) {
    this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (this_00 == (Material *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                     (StringLiteral__TorusTubeRadius,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (this_00,name,radius,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetZTestAlways() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestAlways
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestEnabled
               (GizmoCircularMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestLess
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZWriteEnabled
               (GizmoCircularMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* GizmoCircularMaterial() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial__ctor
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__ZWrite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
      pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__CullMode,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar1,iVar2,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        GizmoCircularMaterial_SetLit(this,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__LightIntensity);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Material get_CircleMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_CircleMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

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
  pMVar1 = (this->fields)._circleMaterial;
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
  pMVar1 = MaterialPool::MaterialPool_get_CircleCull(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._circleMaterial = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._circleMaterial >> 0xc);
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
  return (this->fields)._circleMaterial;
}


/* Material get_CylindricalTorusMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_CylindricalTorusMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

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
  pMVar1 = (this->fields)._cylindricalTorusMaterial;
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
  pMVar1 = MaterialPool::MaterialPool_get_CylindricalTorusCull(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._cylindricalTorusMaterial = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._cylindricalTorusMaterial >> 0xc);
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
  return (this->fields)._cylindricalTorusMaterial;
}


/* Boolean get_IsLit() */

bool Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

float Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_LightIntensity
                (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__LightIntensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_Material
          (GizmoCircularMaterial *this,MethodInfo *method)

{
  if ((this->fields)._circularType == 0) {
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
    pMVar1 = (this->fields)._circleMaterial;
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
    pMVar2 = (MaterialPool *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (pMVar2 != (MaterialPool *)0x0) {
      pMVar1 = MaterialPool::MaterialPool_get_CircleCull(pMVar2,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._circleMaterial = pMVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._circleMaterial >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
code_?:
      return (this->fields)._circleMaterial;
    }
  }
  else if ((this->fields)._circularType == 1) {
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
    pMVar1 = (this->fields)._torusMaterial;
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
    pMVar2 = (MaterialPool *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (pMVar2 != (MaterialPool *)0x0) {
      pMVar1 = MaterialPool::MaterialPool_get_TorusCull(pMVar2,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._torusMaterial = pMVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._torusMaterial >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
code_?:
      return (this->fields)._torusMaterial;
    }
  }
  else {
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
    pMVar1 = (this->fields)._cylindricalTorusMaterial;
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
    pMVar2 = (MaterialPool *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (pMVar2 != (MaterialPool *)0x0) {
      pMVar1 = MaterialPool::MaterialPool_get_CylindricalTorusCull(pMVar2,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._cylindricalTorusMaterial = pMVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._cylindricalTorusMaterial >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
code_?:
      return (this->fields)._cylindricalTorusMaterial;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar1 = (Material *)(*pcVar8)();
  return pMVar1;
}


/* Material get_TorusMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_TorusMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

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
  pMVar1 = (this->fields)._torusMaterial;
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
  pMVar1 = MaterialPool::MaterialPool_get_TorusCull(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._torusMaterial = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._torusMaterial >> 0xc);
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
  return (this->fields)._torusMaterial;
}

