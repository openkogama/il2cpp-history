
/* Void DestroyBlinkerMaterial() */

void Assembly-CSharp.dll::Blinker::Blinker_DestroyBlinkerMaterial(Blinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).blinkMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).blinkMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__UnityEngine__Graphics);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).blinkDuration;
  fVar2 = (this->fields).blinkStartTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar3 <= fVar1 + fVar2) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).blinkInterval * fVar1;
    fVar4 = (float10)func_?((double)fVar1);
    fVar1 = fVar1 - (float)fVar4;
    if ((fVar1 < 0.0) || ((fVar1 <= _UNK_? && (fVar1 < _UNK_?)))) {
      submeshIndex = 0;
      if (mesh == (Mesh *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      for (; iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                               (mesh,(MethodInfo *)0x0), submeshIndex < iVar6;
          submeshIndex = submeshIndex + 1) {
        if (tfm == (Transform *)0x0) goto code_?;
        pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff70,tfm,(MethodInfo *)0x0);
        matrix = *pMVar7;
        material = (this->fields).blinkMaterial;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                  (mesh,matrix,material,layerMask,targetCamera,submeshIndex,(MethodInfo *)0x0);
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
    func_?(&
                    UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).blinkInterval = 2.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pMVar1 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)m,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  pBVar2 = &this->fields;
  pBVar2->blinkMaterial = pMVar1;
  func_?(pBVar2,pMVar1);
  if (pBVar2->blinkMaterial != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pBVar2->blinkMaterial,color,(MethodInfo *)0x0);
    (this->fields).blinkInterval = interval;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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

