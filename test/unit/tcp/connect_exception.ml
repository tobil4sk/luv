let () =
  Luv.Error.set_on_unhandled_exception (function
    | Exit -> print_endline "Ok"; exit 0
    | _ -> ());

  Helpers.with_server_and_client
    ~port:5111
    ~server:(fun server_tcp accept_tcp -> ())
    ~client:(fun client_tcp address -> raise Exit)
