
/* Void DestroyBlinkerMaterial() */

void Assembly-CSharp.dll::Blinker::Blinker_DestroyBlinkerMaterial(Blinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).blinkMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).blinkMaterial;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pMVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Draw(Mesh, Transform, Camera, Int32) */

void Assembly-CSharp.dll::Blinker::Blinker_Draw
               (Blinker *this,Mesh *mesh,Transform *tfm,Camera *targetCamera,int32_t layerMask,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).blinkDuration;
  fVar2 = (this->fields).blinkStartTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar3 <= fVar1 + fVar2) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).blinkInterval;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat
                      (fVar1 * fVar2,1.0,(MethodInfo *)0x0);
    if (fVar1 < _UNK_?) {
      iStack_4 = 0;
      if (mesh == (Mesh *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      for (; iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                               (mesh,(MethodInfo *)0x0), iStack_4 < iVar6; iStack_4 = iStack_4 + 1)
      {
        if (tfm == (Transform *)0x0) goto code_?;
        pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff74,tfm,(MethodInfo *)0x0);
        matrix = *pMVar7;
        material = (this->fields).blinkMaterial;
        if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                  (mesh,matrix,material,layerMask,targetCamera,iStack_4,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Start(Single) */

void Assembly-CSharp.dll::Blinker::Blinker_Start(Blinker *this,float duration,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).blinkStartTime = fVar1;
  (this->fields).blinkDuration = duration;
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::Blinker::Blinker_Stop(Blinker *this,MethodInfo *method)

{
  (this->fields).blinkDuration = 0.0;
  (this->fields).blinkStartTime = 0.0;
  return;
}


/* Blinker(Single, Material, Color) */

void Assembly-CSharp.dll::Blinker::Blinker__ctor
               (Blinker *this,float interval,Material *m,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).blinkInterval = 2.0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)m,
                       UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                      );
  (this->fields).blinkMaterial = (Material *)this_00;
  if (this_00 != (XpBoostParticlePreviewer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              ((Material *)this_00,color,(MethodInfo *)0x0);
    (this->fields).blinkInterval = interval;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_IsExpired() */

bool Assembly-CSharp.dll::Blinker::Blinker_get_IsExpired(Blinker *this,MethodInfo *method)

{
  fVar1 = (this->fields).blinkDuration;
  fVar2 = (this->fields).blinkStartTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return fVar1 + fVar2 < fVar3;
}

