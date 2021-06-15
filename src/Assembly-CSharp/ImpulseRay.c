
/* Void Initialize(Vector3) */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay_Initialize
               (ImpulseRay *this,Vector3 target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar4->x;
    uStack_5._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = target.y;
    a.x = target.x;
    a.z = target.z;
    b.z = fVar6;
    b.x = (float)(undefined4)uStack_5;
    b.y = (float)uStack_5._4_4_;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&target,a,b,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar4->x;
    uStack_1._4_4_ = pVVar4->y;
    fStack_2 = pVVar4->z;
    puVar7 = (undefined8 *)func_?(&target);
    uStack_5 = *puVar7;
    fVar6 = *(float *)(puVar7 + 1);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
    uVar8._0_4_ = pVVar4->x;
    uVar8._4_4_ = pVVar4->y;
    fVar9 = pVVar4->z;
    target.y = (float)(undefined4)uVar8;
    target.z = (float)uVar8._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
      uVar8 = CONCAT44(target.z,target.y);
    }
    forward.z = fVar6;
    forward.x = (float)(undefined4)uStack_5;
    forward.y = (float)uStack_5._4_4_;
    upwards.z = fVar9;
    upwards.x = (float)(int)uVar8;
    upwards.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                       ((Quaternion *)&stack0xffffffd8,forward,upwards,(MethodInfo *)0x0);
    fVar6 = pQVar10->x;
    fVar9 = pQVar10->y;
    fVar11 = pQVar10->z;
    fVar12 = pQVar10->w;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      value.y = fVar9;
      value.x = fVar6;
      value.z = fVar11;
      value.w = fVar12;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar3,value,(MethodInfo *)0x0);
      fVar13 = (float10)func_?(&uStack_1,0);
      (this->fields).rayMagnitude = (float)fVar13;
      return;
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay_Update(ImpulseRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).radius;
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = 0.0;
  func_?(&stack0xfffffff0,fVar1,fVar1,
                  ((this->fields).rayMagnitude * (this->fields).t) / _UNK_?,0);
  if (this_01 != (Transform *)0x0) {
    value.y = (float)uVar3;
    value.x = (float)uVar2;
    value.z = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_01,value,(MethodInfo *)0x0);
    this_00 = (this->fields).rayRenderer;
    if (this_00 != (MeshRenderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                         ((Color *)&stack0xffffffe0,(this->fields).startColor,
                          (this->fields).endColor,(this->fields).t / _UNK_?,(MethodInfo *)0x0
                         );
      if (this_02 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_02,StringLiteral__TintColor,(Vector4)*pCVar5,(MethodInfo *)0x0);
        fVar1 = (this->fields).t;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar4 = fVar4 + fVar1;
        bVar6 = fVar4 < _UNK_?;
        (this->fields).t = fVar4;
        if (bVar6) {
          return;
        }
        (this->fields).t = 0.0;
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if ((this_03 != (PrefabPool *)0x0) &&
           (this_04 = (EnumPoolManager *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03
                                 ,(MethodInfo *)0x0), this_04 != (EnumPoolManager *)0x0)) {
          EnumPoolManager::EnumPoolManager_Return
                    (this_04,(MonoBehaviour *)this,PoolEnums__Enum_ImpulseGunRay,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ImpulseRay() */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay__ctor(ImpulseRay *this,MethodInfo *method)

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
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

