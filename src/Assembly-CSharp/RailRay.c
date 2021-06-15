
/* Void Awake() */

void Assembly-CSharp.dll::RailRay::RailRay_Awake(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
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
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator DoShowRay(Vector3) */

IEnumerator *
Assembly-CSharp.dll::RailRay::RailRay_DoShowRay(RailRay *this,Vector3 hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RailRay___DoShowRay_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    *(undefined8 *)&(this_00->fields).OnScaleAnimationStopped = hit._0_8_;
    this_00[1].monitor = (MonitorData *)hit.z;
    this_00[1].fields.originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Reset() */

void Assembly-CSharp.dll::RailRay::RailRay_Reset(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
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
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RailRay::RailRay_Update(RailRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).time;
  pfVar2 = &(this->fields).elapsed;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    this_01 = (this->fields).rayRenderer;
    if (this_01 != (LineRenderer *)0x0) {
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_01,(MethodInfo *)0x0);
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                         (&CStack_4,(this->fields).startColor,(this->fields).endColor,
                          (this->fields).elapsed / (this->fields).time,(MethodInfo *)0x0);
      if (this_04 != (Material *)0x0) {
        fStack5 = pCVar3->b;
        puStack6 = (undefined *)pCVar3->a;
        CStack_4.a = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_04,StringLiteral__TintColor,(Vector4)*pCVar3,(MethodInfo *)0x0);
        fVar1 = (this->fields).elapsed;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).elapsed = fVar7 + fVar1;
        return;
      }
    }
  }
  else {
    this_00 = (this->fields).particles;
    if (this_00 != (ParticleSystem *)0x0) {
      bVar8 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        return;
      }
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if ((this_02 != (PrefabPool *)0x0) &&
         (this_03 = (EnumPoolManager *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                               (MethodInfo *)0x0), this_03 != (EnumPoolManager *)0x0)) {
        EnumPoolManager::EnumPoolManager_Return
                  (this_03,(MonoBehaviour *)this,(this->fields).railEnumType,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RailRay() */

void Assembly-CSharp.dll::RailRay::RailRay__ctor(RailRay *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x3dcccccd,0x3dcccccd,0x3dcccccd,0,0);
  (this->fields).endColor.r = fStack_1;
  (this->fields).endColor.g = fStack_2;
  (this->fields).endColor.b = fStack_3;
  (this->fields).endColor.a = fStack_4;
  (this->fields).time = 1.2;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_Particles(ParticleSystem) */

void Assembly-CSharp.dll::RailRay::RailRay_set_Particles
               (RailRay *this,ParticleSystem *value,MethodInfo *method)

{
  (this->fields).particles = value;
  return;
}

