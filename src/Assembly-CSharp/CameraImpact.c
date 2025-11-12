
/* CameraImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::CameraImpact::CameraImpact__ctor
               (CameraImpact *this,Vector3 *impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  fVar2 = impactDirection->y;
  fVar3 = impactDirection->z;
  (this->fields).impactDirection.x = impactDirection->x;
  (this->fields).impactDirection.y = fVar2;
  (this->fields).impactDirection.z = fVar3;
  (this->fields).impactCurve = impactCurve;
  if (bVar1) {
    (this->fields).impactSpace = impactSpace;
    (this->fields).forceMultiplier = forceMultiplier;
    return;
  }
  uVar4 = (uint)((ulonglong)&(this->fields).impactCurve >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar1 = uVar6 == *puVar7;
    if (bVar1) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar1);
  (this->fields).impactSpace = impactSpace;
  (this->fields).forceMultiplier = forceMultiplier;
  return;
}

