
/* Void Awake() */

void Assembly-CSharp.dll::RailRay::RailRay_Awake(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).target.y;
  fVar2 = (this->fields).target.z;
  (this->fields).hit.x = (this->fields).target.x;
  (this->fields).hit.y = fVar1;
  (this->fields).hit.z = fVar2;
  pLVar3 = (this->fields).rayRenderer;
  (this->fields).elapsed = 0.0;
  if (pLVar3 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar3,2,(MethodInfo *)0x0);
    pLVar3 = (this->fields).rayRenderer;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
      if (pLVar3 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar3,1,*pVVar5,(MethodInfo *)0x0);
        pLVar3 = (this->fields).rayRenderer;
        if (pLVar3 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    (pLVar3,0,(this->fields).hit,(MethodInfo *)0x0);
          pLVar3 = (this->fields).rayRenderer;
          if (pLVar3 != (LineRenderer *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar3,(MethodInfo *)0x0);
            if (this_00 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (this_00,StringLiteral__TintColor,(Vector4)(this->fields).startColor,
                         (MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar4,(this->fields).target,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator DoShowRay(Vector3) */

IEnumerator *
Assembly-CSharp.dll::RailRay::RailRay_DoShowRay(RailRay *this,Vector3 hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RailRay___DoShowRay_d__20);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__RailRay___DoShowRay_d__20);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    this_00[1].monitor = (MonitorData *)hit.x;
    this_00[1].fields._.value = (int32_t)hit.y;
    this_00[1].fields._.OnChange = (Action_1_Int32Enum_ *)hit.z;
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Reset() */

void Assembly-CSharp.dll::RailRay::RailRay_Reset(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).target.y;
  fVar2 = (this->fields).target.z;
  (this->fields).hit.x = (this->fields).target.x;
  (this->fields).hit.y = fVar1;
  (this->fields).hit.z = fVar2;
  pLVar3 = (this->fields).rayRenderer;
  (this->fields).elapsed = 0.0;
  if (pLVar3 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar3,2,(MethodInfo *)0x0);
    pLVar3 = (this->fields).rayRenderer;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
      if (pLVar3 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar3,1,*pVVar5,(MethodInfo *)0x0);
        pLVar3 = (this->fields).rayRenderer;
        if (pLVar3 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    (pLVar3,0,(this->fields).hit,(MethodInfo *)0x0);
          pLVar3 = (this->fields).rayRenderer;
          if (pLVar3 != (LineRenderer *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pLVar3,(MethodInfo *)0x0);
            if (this_00 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (this_00,StringLiteral__TintColor,(Vector4)(this->fields).startColor,
                         (MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar4,(this->fields).target,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RailRay::RailRay_Update(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).time;
  pfVar2 = &(this->fields).elapsed;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    this_02 = (this->fields).rayRenderer;
    if (this_02 != (LineRenderer *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_02,(MethodInfo *)0x0);
      fVar3 = (this->fields).elapsed / (this->fields).time;
      fVar1 = (this->fields).startColor.r;
      fVar4 = (this->fields).startColor.g;
      fVar5 = (this->fields).startColor.b;
      fVar6 = (this->fields).startColor.a;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      if (this_03 != (Material *)0x0) {
        value.y = ((this->fields).endColor.g - fVar4) * fVar3 + fVar4;
        value.x = ((this->fields).endColor.r - fVar1) * fVar3 + fVar1;
        value.z = ((this->fields).endColor.b - fVar5) * fVar3 + fVar5;
        value.w = ((this->fields).endColor.a - fVar6) * fVar3 + fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_03,StringLiteral__TintColor,value,(MethodInfo *)0x0);
        fVar1 = (this->fields).elapsed;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).elapsed = fVar4 + fVar1;
        return;
      }
    }
  }
  else {
    this_00 = (this->fields).particles;
    if (this_00 != (ParticleSystem *)0x0) {
      bVar7 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar8 == (PrefabPool *)0x0) ||
           (this_01 = (pPVar8->fields).enumPoolManager, this_01 == (EnumPoolManager *)0x0))
        goto code_?;
        EnumPoolManager::EnumPoolManager_Return
                  (this_01,(MonoBehaviour *)this,(this->fields).railEnumType,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RailRay() */

void Assembly-CSharp.dll::RailRay::RailRay__ctor(RailRay *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).endColor.r = _UNK_?;
  (this->fields).endColor.g = fVar3;
  (this->fields).endColor.b = fVar2;
  (this->fields).endColor.a = fVar1;
  (this->fields).time = 1.2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

