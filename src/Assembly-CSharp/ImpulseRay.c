
/* Void Initialize(Vector3) */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay_Initialize
               (ImpulseRay *this,Vector3 target,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_3 + 4),pTVar1,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fStack_6 = target.x - (float)uVar4;
    fStack_7 = target.y - (float)uVar5;
    fStack_8 = target.z - pVVar2->z;
    auStack_3 = (undefined1  [8])CONCAT44(fStack_7,fStack_6);
    fStack_9 = fStack_8;
    puVar10 = (undefined8 *)func_?(&stack0xfffffffc,auStack_3,0);
    fVar11 = *(float *)(puVar10 + 1);
    uVar12 = (undefined4)*puVar10;
    uVar13 = (undefined4)((ulonglong)*puVar10 >> 0x20);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    forward.y = (float)uVar13;
    forward.x = (float)uVar12;
    forward.z = fVar11;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                       (&QStack_15,forward,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                        (MethodInfo *)0x0);
    fStack_8 = pQVar14->x;
    auStack_3._0_4_ = pQVar14->y;
    auStack_3._4_4_ = pQVar14->z;
    fStack_9 = pQVar14->w;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      value.y = fStack_9;
      value.x = (float)auStack_3._4_4_;
      value.z = (float)uStack_16;
      value.w = unaff_EBP;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar1,value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        pMStack_17 = (Math__Class *)&TypeInfo__System__Math;
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        pMStack_17 = TypeInfo__System__Math;
        func_?();
      }
      dVar18 = (double)((float)auStack_3._0_4_ * (float)auStack_3._0_4_ +
                       (float)auStack_3._4_4_ * (float)auStack_3._4_4_ + fStack_9 * fStack_9);
      if (0.0 <= dVar18) {
        (this->fields).rayMagnitude = (float)SQRT(dVar18);
        return;
      }
      func_?();
      (this->fields).rayMagnitude = (float)dVar18;
      return;
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay_Update(ImpulseRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).radius;
  if (this_02 != (Transform *)0x0) {
    value.y = fVar1;
    value.x = fVar1;
    value.z = ((this->fields).rayMagnitude * (this->fields).t) / _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_02,value,(MethodInfo *)0x0);
    this_00 = (this->fields).rayRenderer;
    if (this_00 != (MeshRenderer *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
      fVar2 = (this->fields).t / _UNK_?;
      fVar1 = (this->fields).startColor.r;
      fVar3 = (this->fields).startColor.g;
      fVar4 = (this->fields).startColor.b;
      fVar5 = (this->fields).startColor.a;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (_UNK_? < fVar2) {
        fVar2 = _UNK_?;
      }
      if (this_03 != (Material *)0x0) {
        value_00.y = ((this->fields).endColor.g - fVar3) * fVar2 + fVar3;
        value_00.x = ((this->fields).endColor.r - fVar1) * fVar2 + fVar1;
        value_00.z = ((this->fields).endColor.b - fVar4) * fVar2 + fVar4;
        value_00.w = ((this->fields).endColor.a - fVar5) * fVar2 + fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_03,StringLiteral__TintColor,value_00,(MethodInfo *)0x0);
        fVar1 = (this->fields).t;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar3 = fVar3 + fVar1;
        bVar6 = _UNK_? <= fVar3;
        (this->fields).t = fVar3;
        if (bVar6) {
          (this->fields).t = 0.0;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar7 == (PrefabPool *)0x0) ||
             (this_01 = (pPVar7->fields).enumPoolManager, this_01 == (EnumPoolManager *)0x0))
          goto code_?;
          EnumPoolManager::EnumPoolManager_Return
                    (this_01,(MonoBehaviour *)this,PoolEnums__Enum_ImpulseGunRay,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ImpulseRay() */

void Assembly-CSharp.dll::ImpulseRay::ImpulseRay__ctor(ImpulseRay *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).endColor.r = _UNK_?;
  (this->fields).endColor.g = fVar3;
  (this->fields).endColor.b = fVar2;
  (this->fields).endColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

