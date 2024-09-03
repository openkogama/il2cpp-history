
/* IAsyncResult BeginInvoke(Int32, Gizmo, GizmoHandleHoverData, YesNoAnswer, AsyncCallback, Object)
    */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoHandleCanHoverHandler::GizmoHandleCanHoverHandler_BeginInvoke
          (GizmoHandleCanHoverHandler *this,int32_t handleId,Gizmo *ownerGizmo,
          GizmoHandleHoverData *handleHoverData,YesNoAnswer *answer,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__System__Int32,&handleId);
  pGStack_3 = ownerGizmo;
  pGStack_4 = handleHoverData;
  pYStack_5 = answer;
  pIVar6 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar6;
}

