
/* CollisionDetectionGlobalBuffers() */

void Assembly-CSharp.dll::CollisionDetectionGlobalBuffers::CollisionDetectionGlobalBuffers__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (RaycastHit__Array *)func_?(TypeInfo__UnityEngine__RaycastHit,0x80);
  TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer = pRVar1;
  pCVar2 = (Collider__Array *)func_?(TypeInfo__UnityEngine__Collider,0x80);
  TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer = pCVar2;
  return;
}

