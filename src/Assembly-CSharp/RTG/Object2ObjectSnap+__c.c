
/* Int32 <CalculateSnapResult>b__14_0(Object2ObjectSnap+SnapSortData,
   Object2ObjectSnap+SnapSortData) */

int32_t Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::
        Object2ObjectSnap_c__CalculateSnapResult_b__14_0
                  (Object2ObjectSnap_c *this,Object2ObjectSnap_SnapSortData *s0,
                  Object2ObjectSnap_SnapSortData *s1,MethodInfo *method)

{
  fVar1 = s1->SnapDistance;
  if (s0->SnapDistance <= fVar1 && fVar1 != s0->SnapDistance) {
    return -1;
  }
  if (s0->SnapDistance <= fVar1) {
    if (s0->SnapDistance == fVar1) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(s0->SnapDistance)) {
      return (0x7f800000 < (uint)ABS(fVar1)) - 1;
    }
  }
  return 1;
}


/* Int32 <CalculateSnapResult>b__14_1(Object2ObjectSnap+SnapSortData,
   Object2ObjectSnap+SnapSortData) */

int32_t Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::
        Object2ObjectSnap_c__CalculateSnapResult_b__14_1
                  (Object2ObjectSnap_c *this,Object2ObjectSnap_SnapSortData *s0,
                  Object2ObjectSnap_SnapSortData *s1,MethodInfo *method)

{
  fVar1 = s1->FaceAreaDiff;
  if (s0->FaceAreaDiff <= fVar1 && fVar1 != s0->FaceAreaDiff) {
    return -1;
  }
  if (s0->FaceAreaDiff <= fVar1) {
    if (s0->FaceAreaDiff == fVar1) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(s0->FaceAreaDiff)) {
      return (0x7f800000 < (uint)ABS(fVar1)) - 1;
    }
  }
  return 1;
}


/* Object2ObjectSnap+<>c() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::Object2ObjectSnap_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Object2ObjectSnap____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object2ObjectSnap_c *)FUN_?(TypeInfo__RTG__Object2ObjectSnap____c);
  TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9 = pOVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RTG__Object2ObjectSnap____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

