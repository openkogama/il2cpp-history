
/* Vector3 Update(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                    (Vector3 *__return_storage_ptr__,CameraLerpToDesiredDistance *this,
                    Vector3 targetPosition,Vector3 cameraPosition,MethodInfo *method)

{
  fStack_1 = targetPosition.z - cameraPosition.z;
  uStack_2 = CONCAT44(targetPosition.y - cameraPosition.y,targetPosition.x - cameraPosition.x);
  fStack_3 = fStack_1;
  fVar4 = (float10)func_?(&uStack_2,0);
  fStack_5 = (float)fVar4;
  fVar6 = fStack_5;
  if ((this->fields).newDistance <= fStack_5 && fStack_5 != (this->fields).newDistance) {
    fStack_7 = (this->fields).newDistance;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_7 = fVar6 * _UNK_? + fStack_7;
    fVar6 = fStack_7;
    if (fStack_5 <= fStack_7) {
      fVar6 = fStack_5;
    }
  }
  fStack_1 = cameraPosition.z - targetPosition.z;
  (this->fields).newDistance = fVar6;
  uStack_2 = CONCAT44(cameraPosition.y - targetPosition.y,cameraPosition.x - targetPosition.x);
  fStack_3 = fStack_1;
  puVar8 = (undefined8 *)func_?(auStack_9,&uStack_2,0);
  fVar10 = *(float *)(puVar8 + 1);
  fVar6 = (this->fields).newDistance;
  uStack_2._0_4_ = (float)*puVar8;
  uStack_2._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
  __return_storage_ptr__->x = targetPosition.x + (float)uStack_2 * fVar6;
  __return_storage_ptr__->y = targetPosition.y + uStack_2._4_4_ * fVar6;
  __return_storage_ptr__->z = targetPosition.z + fVar10 * fVar6;
  return __return_storage_ptr__;
}


/* CameraLerpToDesiredDistance() */

void Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor
               (CameraLerpToDesiredDistance *this,MethodInfo *method)

{
  (this->fields).newDistance = INFINITY;
  return;
}

