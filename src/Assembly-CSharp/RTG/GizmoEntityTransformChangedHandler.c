
/* IAsyncResult BeginInvoke(GizmoTransform, GizmoTransform+ChangeData, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoEntityTransformChangedHandler::
GizmoEntityTransformChangedHandler_BeginInvoke
          (GizmoEntityTransformChangedHandler *this,GizmoTransform *transform,
          GizmoTransform_ChangeData changeData,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoTransform__ChangeData);
    cRam_? = '\x01';
  }
  pGStack_1 = transform;
  uStack_2 = 0;
  uStack_3 = func_?(TypeInfo__RTG__GizmoTransform__ChangeData,&changeData);
  pIVar4 = (IAsyncResult *)func_?(this,&pGStack_1,callback,object);
  return pIVar4;
}

