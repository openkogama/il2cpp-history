
/* ParticleSystem Instantiate(PoolEnums) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate
          (PoolEnums__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    pOVar2 = EnumPoolManager::EnumPoolManager_Instantiate
                       (this,type,
                        OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                       );
    if (pOVar2 != (Object *)0x0) {
      pOVar2[2].klass = (Object__Class *)type;
      return (ParticleSystem *)pOVar2[1].monitor;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (ParticleSystem *)(*pcVar3)();
  return pPVar4;
}


/* ParticleSystem Instantiate(PoolEnums, Vector3, Quaternion, Nullable`1[UnityEngine.Color]) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
          (PoolEnums__Enum type,Vector3 position,Quaternion rotation,
          Nullable_1_UnityEngine_Color_ particleColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                   );
    func_?(&
                    OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    this_00 = (Component *)
              EnumPoolManager::EnumPoolManager_Instantiate
                        (this,type,
                         OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                        );
    if (this_00 != (Component *)0x0) {
      this_00[1].monitor = (MonitorData *)type;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,position,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (this_01,rotation,(MethodInfo *)0x0);
        if (particleColor.hasValue == 0) {
code_?:
          return (ParticleSystem *)this_00[1].klass;
        }
        if (this_00[1].klass != (Component__Class *)0x0) {
          this_02 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this_00[1].klass,
                               UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                              );
          if (this_02 != (Renderer *)0x0) {
            particleColor.value.r = 0.0;
            particleColor._0_4_ = this_02;
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_02,(MethodInfo *)0x0);
            particleColor.value.r =
                 (float)MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__;
            particleColor._0_4_ = &particleColor;
            pRVar2 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
                     Nullable_1_UnityEngine_Rect__get_Value
                               ((Rect *)&stack0xffffffec,
                                (Nullable_1_UnityEngine_Rect_ *)particleColor._0_4_,
                                MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
            if (this_03 != (Material *)0x0) {
              particleColor.value.g = pRVar2->m_XMin;
              particleColor.value.b = pRVar2->m_YMin;
              particleColor.value.a = pRVar2->m_Width;
              particleColor.value.r = (float)StringLiteral__TintColor;
              particleColor._0_4_ = this_03;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (this_03,StringLiteral__TintColor,(Vector4)*pRVar2,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (ParticleSystem *)(*pcVar3)();
  return pPVar4;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_OnValidate
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).particles;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar1 = (ParticleSystem *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                       );
    (this->fields).particles = pPVar1;
    func_?(&(this->fields).particles,pPVar1);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Update
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  obj = this;
  pPVar1 = (this->fields).particles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    fVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_time(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (obj->fields).particles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      this = (OneShotPooledParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      fVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_get_duration_Injected
                        ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
      if (fVar3 <= fVar2) {
        if (cRam_? == '\0') {
          this = (OneShotPooledParticleSystem *)&TypeInfo__PrefabPool;
          func_?();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar4 == (PrefabPool *)0x0) ||
           (this_00 = (pPVar4->fields).enumPoolManager, this_00 == (EnumPoolManager *)0x0))
        goto code_?;
        this = (OneShotPooledParticleSystem *)0x0;
        EnumPoolManager::EnumPoolManager_Return
                  (this_00,(MonoBehaviour *)obj,(obj->fields).type,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  this = (OneShotPooledParticleSystem *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

