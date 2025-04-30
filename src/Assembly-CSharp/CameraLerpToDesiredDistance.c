
/* Vector3 Update(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                    (Vector3 *__return_storage_ptr__,CameraLerpToDesiredDistance *this,
                    Vector3 targetPosition,Vector3 cameraPosition,MethodInfo *method)

{
  afStack_1[4] = targetPosition.x;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  afStack_1[0] = cameraPosition.x;
  afStack_1[1] = 0.0;
  afStack_1[2] = 0.0;
  afStack_1[3] = 0.0;
  fStack_5 = cameraPosition.y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  auVar6._0_8_ = (double)((targetPosition.x - cameraPosition.x) *
                          (targetPosition.x - cameraPosition.x) +
                          (targetPosition.y - cameraPosition.y) *
                          (targetPosition.y - cameraPosition.y) +
                         (targetPosition.z - cameraPosition.z) *
                         (targetPosition.z - cameraPosition.z));
  auVar6._8_8_ = 0;
  if (auVar6._0_8_ < 0.0) {
    func_?();
    dVar7 = auVar6._0_8_;
  }
  else {
    dVar7 = SQRT(auVar6._0_8_);
  }
  fVar8 = (this->fields).newDistance;
  fVar9 = (float)dVar7;
  if (fVar8 < (float)dVar7) {
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_5 = fVar9 * _UNK_? + cameraPosition.y;
    fVar9 = fStack_5;
    if (fVar8 <= fStack_5) {
      fVar9 = fVar8;
    }
  }
  fStack_10 = cameraPosition.z - targetPosition.z;
  (this->fields).newDistance = fVar9;
  uStack_11 = CONCAT44(fStack_5 - targetPosition.y,afStack_1[0] - afStack_1[4]);
  afStack_1[2] = fStack_10;
  puVar12 = (undefined8 *)func_?(afStack_1,&uStack_11,0);
  fVar9 = *(float *)(puVar12 + 1);
  fVar8 = (this->fields).newDistance;
  uStack_11._0_4_ = (float)*puVar12;
  uStack_11._4_4_ = (float)((ulonglong)*puVar12 >> 0x20);
  __return_storage_ptr__->x = afStack_1[4] + (float)uStack_11 * fVar8;
  __return_storage_ptr__->y = targetPosition.y + uStack_11._4_4_ * fVar8;
  __return_storage_ptr__->z = targetPosition.z + fVar9 * fVar8;
  return __return_storage_ptr__;
}


/* CameraLerpToDesiredDistance() */

void Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor
               (CameraLerpToDesiredDistance *this,MethodInfo *method)

{
  (this->fields).newDistance = INFINITY;
  return;
}

