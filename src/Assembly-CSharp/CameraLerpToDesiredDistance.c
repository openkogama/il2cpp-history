
/* Vector3 Update(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                    (Vector3 *__return_storage_ptr__,CameraLerpToDesiredDistance *this,
                    Vector3 targetPosition,Vector3 cameraPosition,MethodInfo *method)

{
  fStack_1 = targetPosition.y;
  fStack_2 = cameraPosition.y;
  fStack_3 = targetPosition.z - cameraPosition.z;
  uStack_4 = CONCAT44(targetPosition.y - cameraPosition.y,targetPosition.x - cameraPosition.x);
  fStack_5 = fStack_3;
  fVar6 = (float10)func_?(&uStack_4,0);
  fStack_7 = (float)fVar6;
  fVar8 = fStack_7;
  fStack_9 = fStack_7;
  if ((this->fields).newDistance <= fStack_7 && fStack_7 != (this->fields).newDistance) {
    fStack_9 = (this->fields).newDistance;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_9 = fVar8 * _UNK_? + fStack_9;
    fVar8 = fStack_9;
    if (fStack_7 <= fStack_9) {
      fVar8 = fStack_7;
    }
  }
  fStack_3 = cameraPosition.z - targetPosition.z;
  (this->fields).newDistance = fVar8;
  uStack_4 = CONCAT44(fStack_2 - fStack_1,cameraPosition.x - targetPosition.x);
  fStack_5 = fStack_3;
  puVar10 = (undefined8 *)func_?(auStack_11,&uStack_4,0);
  fVar12 = *(float *)(puVar10 + 1);
  fVar8 = (this->fields).newDistance;
  uStack_4._0_4_ = (float)*puVar10;
  uStack_4._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
  __return_storage_ptr__->x = targetPosition.x + (float)uStack_4 * fVar8;
  __return_storage_ptr__->y = fStack_1 + uStack_4._4_4_ * fVar8;
  __return_storage_ptr__->z = targetPosition.z + fVar12 * fVar8;
  return __return_storage_ptr__;
}


/* CameraLerpToDesiredDistance() */

void Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor
               (CameraLerpToDesiredDistance *this,MethodInfo *method)

{
  (this->fields).newDistance = INFINITY;
  return;
}

