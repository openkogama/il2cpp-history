
/* Int32 <CalculateSnapResult>b__14_0(Object2ObjectSnap+SnapSortData,
   Object2ObjectSnap+SnapSortData) */

int32_t Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::
        Object2ObjectSnap_c__CalculateSnapResult_b__14_0
                  (Object2ObjectSnap_c *this,Object2ObjectSnap_SnapSortData s0,
                  Object2ObjectSnap_SnapSortData s1,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Single::Single_CompareTo_1
                    ((Single *)&s0.SnapDistance,s1.SnapDistance,(MethodInfo *)0x0);
  return iVar1;
}


/* Int32 <CalculateSnapResult>b__14_1(Object2ObjectSnap+SnapSortData,
   Object2ObjectSnap+SnapSortData) */

int32_t Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::
        Object2ObjectSnap_c__CalculateSnapResult_b__14_1
                  (Object2ObjectSnap_c *this,Object2ObjectSnap_SnapSortData s0,
                  Object2ObjectSnap_SnapSortData s1,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Single::Single_CompareTo_1
                    ((Single *)&s0.FaceAreaDiff,s1.FaceAreaDiff,(MethodInfo *)0x0);
  return iVar1;
}


/* Object2ObjectSnap+<>c() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c::Object2ObjectSnap_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Object2ObjectSnap____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__Object2ObjectSnap____c;
  value = (Object2ObjectSnap_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9 = value;
  func_?(TypeInfo__RTG__Object2ObjectSnap____c->static_fields,value);
  return;
}

